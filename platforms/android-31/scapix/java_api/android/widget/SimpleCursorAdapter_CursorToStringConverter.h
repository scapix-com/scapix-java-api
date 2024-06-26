// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_SIMPLECURSORADAPTER_CURSORTOSTRINGCONVERTER_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_SIMPLECURSORADAPTER_CURSORTOSTRINGCONVERTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class SimpleCursorAdapter_CursorToStringConverter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::SimpleCursorAdapter_CursorToStringConverter>
{
	static constexpr fixed_string class_name = "android/widget/SimpleCursorAdapter$CursorToStringConverter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_SIMPLECURSORADAPTER_CURSORTOSTRINGCONVERTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_SIMPLECURSORADAPTER_CURSORTOSTRINGCONVERTER)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_SIMPLECURSORADAPTER_CURSORTOSTRINGCONVERTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/database/Cursor.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::SimpleCursorAdapter_CursorToStringConverter : public jni::object_base<"android/widget/SimpleCursorAdapter$CursorToStringConverter",
	java::lang::Object>
{
public:

	jni::ref<java::lang::CharSequence> convertToString(jni::ref<android::database::Cursor> p1) { return call_method<"convertToString", jni::ref<java::lang::CharSequence>>(p1); }

protected:

	SimpleCursorAdapter_CursorToStringConverter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_SIMPLECURSORADAPTER_CURSORTOSTRINGCONVERTER
