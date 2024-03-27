// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_VIEWSTRUCTURE_HTMLINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_VIEWSTRUCTURE_HTMLINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class ViewStructure_HtmlInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::ViewStructure_HtmlInfo>
{
	static constexpr fixed_string class_name = "android/view/ViewStructure$HtmlInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_VIEWSTRUCTURE_HTMLINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_VIEWSTRUCTURE_HTMLINFO)
#define SCAPIX_JAVA_API_ANDROID_VIEW_VIEWSTRUCTURE_HTMLINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/android/view/ViewStructure_HtmlInfo_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::ViewStructure_HtmlInfo : public jni::object_base<"android/view/ViewStructure$HtmlInfo",
	java::lang::Object>
{
public:

	using Builder = ViewStructure_HtmlInfo_Builder;

	static jni::ref<android::view::ViewStructure_HtmlInfo> new_object() { return base_::new_object(); }
	jni::ref<java::lang::String> getTag() { return call_method<"getTag", jni::ref<java::lang::String>>(); }
	jni::ref<java::util::List> getAttributes() { return call_method<"getAttributes", jni::ref<java::util::List>>(); }

protected:

	ViewStructure_HtmlInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_VIEWSTRUCTURE_HTMLINFO
