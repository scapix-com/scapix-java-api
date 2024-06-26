// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_APPLICATIONERRORREPORT_CRASHINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_APPLICATIONERRORREPORT_CRASHINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class ApplicationErrorReport_CrashInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::ApplicationErrorReport_CrashInfo>
{
	static constexpr fixed_string class_name = "android/app/ApplicationErrorReport$CrashInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_APPLICATIONERRORREPORT_CRASHINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_APPLICATIONERRORREPORT_CRASHINFO)
#define SCAPIX_JAVA_API_ANDROID_APP_APPLICATIONERRORREPORT_CRASHINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/util/Printer.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::ApplicationErrorReport_CrashInfo : public jni::object_base<"android/app/ApplicationErrorReport$CrashInfo",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> exceptionClassName() { return get_field<"exceptionClassName", jni::ref<java::lang::String>>(); }
	void exceptionClassName(jni::ref<java::lang::String> v) { set_field<"exceptionClassName", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> exceptionMessage() { return get_field<"exceptionMessage", jni::ref<java::lang::String>>(); }
	void exceptionMessage(jni::ref<java::lang::String> v) { set_field<"exceptionMessage", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> stackTrace() { return get_field<"stackTrace", jni::ref<java::lang::String>>(); }
	void stackTrace(jni::ref<java::lang::String> v) { set_field<"stackTrace", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> throwClassName() { return get_field<"throwClassName", jni::ref<java::lang::String>>(); }
	void throwClassName(jni::ref<java::lang::String> v) { set_field<"throwClassName", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> throwFileName() { return get_field<"throwFileName", jni::ref<java::lang::String>>(); }
	void throwFileName(jni::ref<java::lang::String> v) { set_field<"throwFileName", jni::ref<java::lang::String>>(v); }
	jint throwLineNumber() { return get_field<"throwLineNumber", jint>(); }
	void throwLineNumber(jint v) { set_field<"throwLineNumber", jint>(v); }
	jni::ref<java::lang::String> throwMethodName() { return get_field<"throwMethodName", jni::ref<java::lang::String>>(); }
	void throwMethodName(jni::ref<java::lang::String> v) { set_field<"throwMethodName", jni::ref<java::lang::String>>(v); }

	static jni::ref<android::app::ApplicationErrorReport_CrashInfo> new_object() { return base_::new_object(); }
	static jni::ref<android::app::ApplicationErrorReport_CrashInfo> new_object(jni::ref<java::lang::Throwable> tr) { return base_::new_object(tr); }
	static jni::ref<android::app::ApplicationErrorReport_CrashInfo> new_object(jni::ref<android::os::Parcel> in) { return base_::new_object(in); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	void dump(jni::ref<android::util::Printer> pw, jni::ref<java::lang::String> prefix) { return call_method<"dump", void>(pw, prefix); }

protected:

	ApplicationErrorReport_CrashInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_APPLICATIONERRORREPORT_CRASHINFO
