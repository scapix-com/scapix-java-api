// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PRINT_PRINTATTRIBUTES_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_PRINT_PRINTATTRIBUTES_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::print { class PrintAttributes_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::print::PrintAttributes_Builder>
{
	static constexpr fixed_string class_name = "android/print/PrintAttributes$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PRINT_PRINTATTRIBUTES_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PRINT_PRINTATTRIBUTES_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_PRINT_PRINTATTRIBUTES_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/print/PrintAttributes.h>
#include <scapix/java_api/android/print/PrintAttributes_Margins.h>
#include <scapix/java_api/android/print/PrintAttributes_MediaSize.h>
#include <scapix/java_api/android/print/PrintAttributes_Resolution.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::print::PrintAttributes_Builder : public jni::object_base<"android/print/PrintAttributes$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::print::PrintAttributes_Builder> new_object() { return base_::new_object(); }
	jni::ref<android::print::PrintAttributes_Builder> setMediaSize(jni::ref<android::print::PrintAttributes_MediaSize> mediaSize) { return call_method<"setMediaSize", jni::ref<android::print::PrintAttributes_Builder>>(mediaSize); }
	jni::ref<android::print::PrintAttributes_Builder> setResolution(jni::ref<android::print::PrintAttributes_Resolution> resolution) { return call_method<"setResolution", jni::ref<android::print::PrintAttributes_Builder>>(resolution); }
	jni::ref<android::print::PrintAttributes_Builder> setMinMargins(jni::ref<android::print::PrintAttributes_Margins> margins) { return call_method<"setMinMargins", jni::ref<android::print::PrintAttributes_Builder>>(margins); }
	jni::ref<android::print::PrintAttributes_Builder> setColorMode(jint colorMode) { return call_method<"setColorMode", jni::ref<android::print::PrintAttributes_Builder>>(colorMode); }
	jni::ref<android::print::PrintAttributes> build() { return call_method<"build", jni::ref<android::print::PrintAttributes>>(); }

protected:

	PrintAttributes_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PRINT_PRINTATTRIBUTES_BUILDER
