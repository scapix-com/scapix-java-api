// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_EVENTLISTENER_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_EVENTLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class EventListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::EventListener>
{
	static constexpr fixed_string class_name = "java/util/EventListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_EVENTLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_EVENTLISTENER)
#define SCAPIX_JAVA_API_JAVA_UTIL_EVENTLISTENER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::EventListener : public jni::object_base<"java/util/EventListener",
	java::lang::Object>
{
public:


protected:

	EventListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_EVENTLISTENER
