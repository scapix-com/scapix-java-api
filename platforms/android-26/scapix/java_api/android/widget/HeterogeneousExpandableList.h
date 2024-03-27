// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_HETEROGENEOUSEXPANDABLELIST_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_HETEROGENEOUSEXPANDABLELIST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class HeterogeneousExpandableList; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::HeterogeneousExpandableList>
{
	static constexpr fixed_string class_name = "android/widget/HeterogeneousExpandableList";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_HETEROGENEOUSEXPANDABLELIST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_HETEROGENEOUSEXPANDABLELIST)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_HETEROGENEOUSEXPANDABLELIST

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::HeterogeneousExpandableList : public jni::object_base<"android/widget/HeterogeneousExpandableList",
	java::lang::Object>
{
public:

	jint getGroupType(jint p1) { return call_method<"getGroupType", jint>(p1); }
	jint getChildType(jint p1, jint p2) { return call_method<"getChildType", jint>(p1, p2); }
	jint getGroupTypeCount() { return call_method<"getGroupTypeCount", jint>(); }
	jint getChildTypeCount() { return call_method<"getChildTypeCount", jint>(); }

protected:

	HeterogeneousExpandableList(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_HETEROGENEOUSEXPANDABLELIST
