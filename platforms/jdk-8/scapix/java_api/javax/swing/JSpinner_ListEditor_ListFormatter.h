// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/JFormattedTextField_AbstractFormatter.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_JSPINNER_LISTEDITOR_LISTFORMATTER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_JSPINNER_LISTEDITOR_LISTFORMATTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class JSpinner_ListEditor_ListFormatter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::JSpinner_ListEditor_ListFormatter>
{
	static constexpr fixed_string class_name = "javax/swing/JSpinner$ListEditor$ListFormatter";
	using base_classes = std::tuple<scapix::java_api::javax::swing::JFormattedTextField_AbstractFormatter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JSPINNER_LISTEDITOR_LISTFORMATTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_JSPINNER_LISTEDITOR_LISTFORMATTER)
#define SCAPIX_JAVA_API_JAVAX_SWING_JSPINNER_LISTEDITOR_LISTFORMATTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::JSpinner_ListEditor_ListFormatter : public jni::object_base<"javax/swing/JSpinner$ListEditor$ListFormatter",
	javax::swing::JFormattedTextField_AbstractFormatter>
{
public:

	jni::ref<java::lang::String> valueToString(jni::ref<java::lang::Object> p1) { return call_method<"valueToString", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::Object> stringToValue(jni::ref<java::lang::String> p1) { return call_method<"stringToValue", jni::ref<java::lang::Object>>(p1); }

protected:

	JSpinner_ListEditor_ListFormatter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JSPINNER_LISTEDITOR_LISTFORMATTER
