// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_MISC_SIGNALHANDLER_FWD
#define SCAPIX_JAVA_API_SUN_MISC_SIGNALHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::misc { class SignalHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::misc::SignalHandler>
{
	static constexpr fixed_string class_name = "sun/misc/SignalHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_SIGNALHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MISC_SIGNALHANDLER)
#define SCAPIX_JAVA_API_SUN_MISC_SIGNALHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/misc/Signal.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::misc::SignalHandler : public jni::object_base<"sun/misc/SignalHandler",
	java::lang::Object>
{
public:

	static jni::ref<sun::misc::SignalHandler> SIG_DFL() { return get_static_field<"SIG_DFL", jni::ref<sun::misc::SignalHandler>>(); }
	static jni::ref<sun::misc::SignalHandler> SIG_IGN() { return get_static_field<"SIG_IGN", jni::ref<sun::misc::SignalHandler>>(); }

	void handle(jni::ref<sun::misc::Signal> p1) { return call_method<"handle", void>(p1); }

protected:

	SignalHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_SIGNALHANDLER
