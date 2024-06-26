// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PRINT_PRINTJOBINFO_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_PRINT_PRINTJOBINFO_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::print { class PrintJobInfo_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::print::PrintJobInfo_Builder>
{
	static constexpr fixed_string class_name = "android/print/PrintJobInfo$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PRINT_PRINTJOBINFO_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PRINT_PRINTJOBINFO_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_PRINT_PRINTJOBINFO_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/print/PageRange.h>
#include <scapix/java_api/android/print/PrintAttributes.h>
#include <scapix/java_api/android/print/PrintJobInfo.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::print::PrintJobInfo_Builder : public jni::object_base<"android/print/PrintJobInfo$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::print::PrintJobInfo_Builder> new_object(jni::ref<android::print::PrintJobInfo> prototype) { return base_::new_object(prototype); }
	void setCopies(jint copies) { return call_method<"setCopies", void>(copies); }
	void setAttributes(jni::ref<android::print::PrintAttributes> attributes) { return call_method<"setAttributes", void>(attributes); }
	void setPages(jni::ref<jni::array<android::print::PageRange>> pages) { return call_method<"setPages", void>(pages); }
	void putAdvancedOption(jni::ref<java::lang::String> key, jni::ref<java::lang::String> value) { return call_method<"putAdvancedOption", void>(key, value); }
	void putAdvancedOption(jni::ref<java::lang::String> key, jint value) { return call_method<"putAdvancedOption", void>(key, value); }
	jni::ref<android::print::PrintJobInfo> build() { return call_method<"build", jni::ref<android::print::PrintJobInfo>>(); }

protected:

	PrintJobInfo_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PRINT_PRINTJOBINFO_BUILDER
