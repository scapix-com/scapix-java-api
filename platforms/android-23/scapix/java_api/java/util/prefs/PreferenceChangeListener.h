// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/EventListener.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_PREFS_PREFERENCECHANGELISTENER_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_PREFS_PREFERENCECHANGELISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::prefs { class PreferenceChangeListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::prefs::PreferenceChangeListener>
{
	static constexpr fixed_string class_name = "java/util/prefs/PreferenceChangeListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::EventListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_PREFS_PREFERENCECHANGELISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_PREFS_PREFERENCECHANGELISTENER)
#define SCAPIX_JAVA_API_JAVA_UTIL_PREFS_PREFERENCECHANGELISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/prefs/PreferenceChangeEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::prefs::PreferenceChangeListener : public jni::object_base<"java/util/prefs/PreferenceChangeListener",
	java::lang::Object,
	java::util::EventListener>
{
public:

	void preferenceChange(jni::ref<java::util::prefs::PreferenceChangeEvent> p1) { return call_method<"preferenceChange", void>(p1); }

protected:

	PreferenceChangeListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_PREFS_PREFERENCECHANGELISTENER
