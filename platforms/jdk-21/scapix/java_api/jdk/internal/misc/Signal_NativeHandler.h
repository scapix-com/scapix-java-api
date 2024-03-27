// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/misc/Signal_Handler.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_MISC_SIGNAL_NATIVEHANDLER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_MISC_SIGNAL_NATIVEHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::misc { class Signal_NativeHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::misc::Signal_NativeHandler>
{
	static constexpr fixed_string class_name = "jdk/internal/misc/Signal$NativeHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::misc::Signal_Handler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MISC_SIGNAL_NATIVEHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_MISC_SIGNAL_NATIVEHANDLER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_MISC_SIGNAL_NATIVEHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/jdk/internal/misc/Signal.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::misc::Signal_NativeHandler : public jni::object_base<"jdk/internal/misc/Signal$NativeHandler",
	java::lang::Object,
	jdk::internal::misc::Signal_Handler>
{
public:

	void handle(jni::ref<jdk::internal::misc::Signal> sig) { return call_method<"handle", void>(sig); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Signal_NativeHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MISC_SIGNAL_NATIVEHANDLER
