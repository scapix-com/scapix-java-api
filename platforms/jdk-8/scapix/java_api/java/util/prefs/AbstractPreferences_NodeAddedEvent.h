// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/prefs/NodeChangeEvent.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_PREFS_ABSTRACTPREFERENCES_NODEADDEDEVENT_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_PREFS_ABSTRACTPREFERENCES_NODEADDEDEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::prefs { class AbstractPreferences_NodeAddedEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::prefs::AbstractPreferences_NodeAddedEvent>
{
	static constexpr fixed_string class_name = "java/util/prefs/AbstractPreferences$NodeAddedEvent";
	using base_classes = std::tuple<scapix::java_api::java::util::prefs::NodeChangeEvent>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_PREFS_ABSTRACTPREFERENCES_NODEADDEDEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_PREFS_ABSTRACTPREFERENCES_NODEADDEDEVENT)
#define SCAPIX_JAVA_API_JAVA_UTIL_PREFS_ABSTRACTPREFERENCES_NODEADDEDEVENT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::prefs::AbstractPreferences_NodeAddedEvent : public jni::object_base<"java/util/prefs/AbstractPreferences$NodeAddedEvent",
	java::util::prefs::NodeChangeEvent>
{
public:


protected:

	AbstractPreferences_NodeAddedEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_PREFS_ABSTRACTPREFERENCES_NODEADDEDEVENT
