// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/EventObject.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_PREFS_PREFERENCECHANGEEVENT_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_PREFS_PREFERENCECHANGEEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::prefs { class PreferenceChangeEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::prefs::PreferenceChangeEvent>
{
	static constexpr fixed_string class_name = "java/util/prefs/PreferenceChangeEvent";
	using base_classes = std::tuple<scapix::java_api::java::util::EventObject>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_PREFS_PREFERENCECHANGEEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_PREFS_PREFERENCECHANGEEVENT)
#define SCAPIX_JAVA_API_JAVA_UTIL_PREFS_PREFERENCECHANGEEVENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/prefs/Preferences.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::prefs::PreferenceChangeEvent : public jni::object_base<"java/util/prefs/PreferenceChangeEvent",
	java::util::EventObject>
{
public:

	static jni::ref<java::util::prefs::PreferenceChangeEvent> new_object(jni::ref<java::util::prefs::Preferences> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return base_::new_object(p1, p2, p3); }
	jni::ref<java::util::prefs::Preferences> getNode() { return call_method<"getNode", jni::ref<java::util::prefs::Preferences>>(); }
	jni::ref<java::lang::String> getKey() { return call_method<"getKey", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getNewValue() { return call_method<"getNewValue", jni::ref<java::lang::String>>(); }

protected:

	PreferenceChangeEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_PREFS_PREFERENCECHANGEEVENT
