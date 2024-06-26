// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_UTIL_EVENTLOGTAGS_FWD
#define SCAPIX_JAVA_API_ANDROID_UTIL_EVENTLOGTAGS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::util { class EventLogTags; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::util::EventLogTags>
{
	static constexpr fixed_string class_name = "android/util/EventLogTags";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_UTIL_EVENTLOGTAGS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_UTIL_EVENTLOGTAGS)
#define SCAPIX_JAVA_API_ANDROID_UTIL_EVENTLOGTAGS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/util/EventLogTags_Description.h>
#include <scapix/java_api/java/io/BufferedReader.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::util::EventLogTags : public jni::object_base<"android/util/EventLogTags",
	java::lang::Object>
{
public:

	using Description = EventLogTags_Description;

	static jni::ref<android::util::EventLogTags> new_object() { return base_::new_object(); }
	static jni::ref<android::util::EventLogTags> new_object(jni::ref<java::io::BufferedReader> input) { return base_::new_object(input); }
	jni::ref<android::util::EventLogTags_Description> get(jni::ref<java::lang::String> name) { return call_method<"get", jni::ref<android::util::EventLogTags_Description>>(name); }
	jni::ref<android::util::EventLogTags_Description> get(jint tag) { return call_method<"get", jni::ref<android::util::EventLogTags_Description>>(tag); }

protected:

	EventLogTags(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_UTIL_EVENTLOGTAGS
