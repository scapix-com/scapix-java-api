// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PRINT_PRINTATTRIBUTES_MARGINS_FWD
#define SCAPIX_JAVA_API_ANDROID_PRINT_PRINTATTRIBUTES_MARGINS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::print { class PrintAttributes_Margins; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::print::PrintAttributes_Margins>
{
	static constexpr fixed_string class_name = "android/print/PrintAttributes$Margins";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PRINT_PRINTATTRIBUTES_MARGINS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PRINT_PRINTATTRIBUTES_MARGINS)
#define SCAPIX_JAVA_API_ANDROID_PRINT_PRINTATTRIBUTES_MARGINS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::print::PrintAttributes_Margins : public jni::object_base<"android/print/PrintAttributes$Margins",
	java::lang::Object>
{
public:

	static jni::ref<android::print::PrintAttributes_Margins> NO_MARGINS() { return get_static_field<"NO_MARGINS", jni::ref<android::print::PrintAttributes_Margins>>(); }

	static jni::ref<android::print::PrintAttributes_Margins> new_object(jint leftMils, jint topMils, jint rightMils, jint bottomMils) { return base_::new_object(leftMils, topMils, rightMils, bottomMils); }
	jint getLeftMils() { return call_method<"getLeftMils", jint>(); }
	jint getTopMils() { return call_method<"getTopMils", jint>(); }
	jint getRightMils() { return call_method<"getRightMils", jint>(); }
	jint getBottomMils() { return call_method<"getBottomMils", jint>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	PrintAttributes_Margins(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PRINT_PRINTATTRIBUTES_MARGINS
