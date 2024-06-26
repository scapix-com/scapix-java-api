// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_FILTERQUERYPROVIDER_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_FILTERQUERYPROVIDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class FilterQueryProvider; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::FilterQueryProvider>
{
	static constexpr fixed_string class_name = "android/widget/FilterQueryProvider";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_FILTERQUERYPROVIDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_FILTERQUERYPROVIDER)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_FILTERQUERYPROVIDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/database/Cursor.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::FilterQueryProvider : public jni::object_base<"android/widget/FilterQueryProvider",
	java::lang::Object>
{
public:

	jni::ref<android::database::Cursor> runQuery(jni::ref<java::lang::CharSequence> p1) { return call_method<"runQuery", jni::ref<android::database::Cursor>>(p1); }

protected:

	FilterQueryProvider(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_FILTERQUERYPROVIDER
