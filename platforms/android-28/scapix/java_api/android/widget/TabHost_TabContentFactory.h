// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_TABHOST_TABCONTENTFACTORY_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_TABHOST_TABCONTENTFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class TabHost_TabContentFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::TabHost_TabContentFactory>
{
	static constexpr fixed_string class_name = "android/widget/TabHost$TabContentFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_TABHOST_TABCONTENTFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_TABHOST_TABCONTENTFACTORY)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_TABHOST_TABCONTENTFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::TabHost_TabContentFactory : public jni::object_base<"android/widget/TabHost$TabContentFactory",
	java::lang::Object>
{
public:

	jni::ref<android::view::View> createTabContent(jni::ref<java::lang::String> p1) { return call_method<"createTabContent", jni::ref<android::view::View>>(p1); }

protected:

	TabHost_TabContentFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_TABHOST_TABCONTENTFACTORY
