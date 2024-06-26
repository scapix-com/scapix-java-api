// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_LAYOUTINFLATER_FILTER_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_LAYOUTINFLATER_FILTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class LayoutInflater_Filter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::LayoutInflater_Filter>
{
	static constexpr fixed_string class_name = "android/view/LayoutInflater$Filter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_LAYOUTINFLATER_FILTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_LAYOUTINFLATER_FILTER)
#define SCAPIX_JAVA_API_ANDROID_VIEW_LAYOUTINFLATER_FILTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::LayoutInflater_Filter : public jni::object_base<"android/view/LayoutInflater$Filter",
	java::lang::Object>
{
public:

	jboolean onLoadClass(jni::ref<java::lang::Class> p1) { return call_method<"onLoadClass", jboolean>(p1); }

protected:

	LayoutInflater_Filter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_LAYOUTINFLATER_FILTER
