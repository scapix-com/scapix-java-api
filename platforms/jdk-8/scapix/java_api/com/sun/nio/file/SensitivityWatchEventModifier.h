// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>
#include <scapix/java_api/java/nio/file/WatchEvent_Modifier.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_NIO_FILE_SENSITIVITYWATCHEVENTMODIFIER_FWD
#define SCAPIX_JAVA_API_COM_SUN_NIO_FILE_SENSITIVITYWATCHEVENTMODIFIER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::nio::file { class SensitivityWatchEventModifier; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::nio::file::SensitivityWatchEventModifier>
{
	static constexpr fixed_string class_name = "com/sun/nio/file/SensitivityWatchEventModifier";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum, scapix::java_api::java::nio::file::WatchEvent_Modifier>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NIO_FILE_SENSITIVITYWATCHEVENTMODIFIER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_NIO_FILE_SENSITIVITYWATCHEVENTMODIFIER)
#define SCAPIX_JAVA_API_COM_SUN_NIO_FILE_SENSITIVITYWATCHEVENTMODIFIER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::nio::file::SensitivityWatchEventModifier : public jni::object_base<"com/sun/nio/file/SensitivityWatchEventModifier",
	java::lang::Enum,
	java::nio::file::WatchEvent_Modifier>
{
public:

	static jni::ref<com::sun::nio::file::SensitivityWatchEventModifier> HIGH() { return get_static_field<"HIGH", jni::ref<com::sun::nio::file::SensitivityWatchEventModifier>>(); }
	static jni::ref<com::sun::nio::file::SensitivityWatchEventModifier> MEDIUM() { return get_static_field<"MEDIUM", jni::ref<com::sun::nio::file::SensitivityWatchEventModifier>>(); }
	static jni::ref<com::sun::nio::file::SensitivityWatchEventModifier> LOW() { return get_static_field<"LOW", jni::ref<com::sun::nio::file::SensitivityWatchEventModifier>>(); }

	static jni::ref<jni::array<com::sun::nio::file::SensitivityWatchEventModifier>> values() { return call_static_method<"values", jni::ref<jni::array<com::sun::nio::file::SensitivityWatchEventModifier>>>(); }
	static jni::ref<com::sun::nio::file::SensitivityWatchEventModifier> valueOf(jni::ref<java::lang::String> p1) { return call_static_method<"valueOf", jni::ref<com::sun::nio::file::SensitivityWatchEventModifier>>(p1); }
	jint sensitivityValueInSeconds() { return call_method<"sensitivityValueInSeconds", jint>(); }

protected:

	SensitivityWatchEventModifier(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NIO_FILE_SENSITIVITYWATCHEVENTMODIFIER
