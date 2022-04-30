#include "discord/discord.h"
#include <string>
#include <unordered_map>
#include <chrono>

class headhunter_rpc_t
{
private:
	headhunter_rpc_t() {};
	bool running = false;
	bool initialized = false;

	std::uint64_t date_start = 1651184614;
	std::uint64_t application_id = 969093039819747368;
	std::string state = "headhunter";
	std::string details = "S tier exploit, developed by the worlds best developer fishy#7337";
	std::string name = "headhunter";
	std::string activity_type = "PLAYING";
	std::string large_image_key = "chan";
	std::string large_image_text = "headhunter on top";
	std::string small_image_key = "";
	std::string small_image_text = "";

	discord::Core* core; // automatically becomes emo once it's deconstructed
	discord::Activity RPC{};
public:
	headhunter_rpc_t(headhunter_rpc_t const&) = delete;
	void operator=(headhunter_rpc_t const&) = delete;

	static headhunter_rpc_t& get()
	{
		static headhunter_rpc_t headhunter_rpc{};
		return headhunter_rpc;
	}

	void initialize(bool run = true)
	{
		if (this->initialized) return;
		this->initialized = true;
		this->running = run;

		std::chrono::seconds unix_timestamp = std::chrono::seconds(std::time(NULL));
		this->date_start = unix_timestamp.count();

		discord::Core::Create(this->application_id, DiscordCreateFlags_Default, &core);
		this->update_activity();
	}

	void set_enabled(bool running)
	{
		this->running = running;
	}

	std::uint64_t get_application_id() const
	{
		return this->application_id;
	}

	void set_application_id(std::uint64_t id)
	{
		this->application_id = id;
	}

	void set_state(const std::string& state)
	{
		this->state = state;
	}

	void set_details(const std::string& details)
	{
		this->details = details;
	}

	void set_large_image_key(const std::string& key)
	{
		this->large_image_key = key;
	}

	void set_large_image_text(const std::string& text)
	{
		this->large_image_text = text;
	}

	void set_small_image_key(const std::string& key)
	{
		this->small_image_key = key;
	}

	void set_small_image_text(const std::string& text)
	{
		this->small_image_text = text;
	}

	void set_activity_type(const std::string& activity) // LISTENING, PLAYING, STREAMING, WATCHING
	{
		this->activity_type = activity;
	}

	void set_name(const std::string& name)
	{
		this->name = name;
	}

	void set_date_start(std::uint64_t date)
	{
		this->date_start = date;
	}

	void update_activity()
	{
		using discord::ActivityType;
		static std::unordered_map<std::string, ActivityType> mapped = { // seem to be unused when using activity
			{"PLAYING", ActivityType::Playing},
			{"WATCHING", ActivityType::Watching},
			{"LISTENING", ActivityType::Listening},
			{"STREAMING", ActivityType::Streaming},
		};

		discord::Activity& activity = this->RPC;

		activity.SetApplicationId(this->application_id);
		activity.SetState(this->state.c_str());
		activity.SetDetails(this->details.c_str());
		activity.SetName(this->name.c_str());
		activity.SetType(mapped[this->activity_type]); // gl with crash if they name anything unordinary lol

		activity.GetAssets().SetSmallText(this->small_image_text.c_str());
		activity.GetAssets().SetSmallImage(this->small_image_key.c_str());
		activity.GetAssets().SetLargeImage(this->large_image_key.c_str());
		activity.GetAssets().SetLargeText(this->large_image_text.c_str());

		activity.GetTimestamps().SetStart(this->date_start);

		this->core->ActivityManager().UpdateActivity(this->RPC, [](discord::Result) {});
	}

	void clear_activity()
	{
		this->core->ActivityManager().ClearActivity([](discord::Result) {});
	}

	void run_callback()
	{
		if (this->running && this->initialized)
			this->core->RunCallbacks();
	}

	discord::Core* get_core() const
	{
		return this->core;
	}

	void set_core(discord::Core* new_core)
	{
		this->core = new_core;
	}
};