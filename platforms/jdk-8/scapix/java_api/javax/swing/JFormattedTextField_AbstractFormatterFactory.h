// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_JFORMATTEDTEXTFIELD_ABSTRACTFORMATTERFACTORY_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_JFORMATTEDTEXTFIELD_ABSTRACTFORMATTERFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class JFormattedTextField_AbstractFormatterFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::JFormattedTextField_AbstractFormatterFactory>
{
	static constexpr fixed_string class_name = "javax/swing/JFormattedTextField$AbstractFormatterFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JFORMATTEDTEXTFIELD_ABSTRACTFORMATTERFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_JFORMATTEDTEXTFIELD_ABSTRACTFORMATTERFACTORY)
#define SCAPIX_JAVA_API_JAVAX_SWING_JFORMATTEDTEXTFIELD_ABSTRACTFORMATTERFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/JFormattedTextField.h>
#include <scapix/java_api/javax/swing/JFormattedTextField_AbstractFormatter.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::JFormattedTextField_AbstractFormatterFactory : public jni::object_base<"javax/swing/JFormattedTextField$AbstractFormatterFactory",
	java::lang::Object>
{
public:

	static jni::ref<javax::swing::JFormattedTextField_AbstractFormatterFactory> new_object() { return base_::new_object(); }
	jni::ref<javax::swing::JFormattedTextField_AbstractFormatter> getFormatter(jni::ref<javax::swing::JFormattedTextField> p1) { return call_method<"getFormatter", jni::ref<javax::swing::JFormattedTextField_AbstractFormatter>>(p1); }

protected:

	JFormattedTextField_AbstractFormatterFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JFORMATTEDTEXTFIELD_ABSTRACTFORMATTERFACTORY
