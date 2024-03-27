// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/JTextField.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_JFORMATTEDTEXTFIELD_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_JFORMATTEDTEXTFIELD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class JFormattedTextField; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::JFormattedTextField>
{
	static constexpr fixed_string class_name = "javax/swing/JFormattedTextField";
	using base_classes = std::tuple<scapix::java_api::javax::swing::JTextField>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JFORMATTEDTEXTFIELD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_JFORMATTEDTEXTFIELD)
#define SCAPIX_JAVA_API_JAVAX_SWING_JFORMATTEDTEXTFIELD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/text/Format.h>
#include <scapix/java_api/javax/swing/Action.h>
#include <scapix/java_api/javax/swing/JFormattedTextField_AbstractFormatter.h>
#include <scapix/java_api/javax/swing/JFormattedTextField_AbstractFormatterFactory.h>
#include <scapix/java_api/javax/swing/text/Document.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::JFormattedTextField : public jni::object_base<"javax/swing/JFormattedTextField",
	javax::swing::JTextField>
{
public:

	using AbstractFormatterFactory = JFormattedTextField_AbstractFormatterFactory;
	using AbstractFormatter = JFormattedTextField_AbstractFormatter;

	static jint COMMIT() { return get_static_field<"COMMIT", jint>(); }
	static jint COMMIT_OR_REVERT() { return get_static_field<"COMMIT_OR_REVERT", jint>(); }
	static jint REVERT() { return get_static_field<"REVERT", jint>(); }
	static jint PERSIST() { return get_static_field<"PERSIST", jint>(); }

	static jni::ref<javax::swing::JFormattedTextField> new_object() { return base_::new_object(); }
	static jni::ref<javax::swing::JFormattedTextField> new_object(jni::ref<java::lang::Object> p1) { return base_::new_object(p1); }
	static jni::ref<javax::swing::JFormattedTextField> new_object(jni::ref<java::text::Format> p1) { return base_::new_object(p1); }
	static jni::ref<javax::swing::JFormattedTextField> new_object(jni::ref<javax::swing::JFormattedTextField_AbstractFormatter> p1) { return base_::new_object(p1); }
	static jni::ref<javax::swing::JFormattedTextField> new_object(jni::ref<javax::swing::JFormattedTextField_AbstractFormatterFactory> p1) { return base_::new_object(p1); }
	static jni::ref<javax::swing::JFormattedTextField> new_object(jni::ref<javax::swing::JFormattedTextField_AbstractFormatterFactory> p1, jni::ref<java::lang::Object> p2) { return base_::new_object(p1, p2); }
	void setFocusLostBehavior(jint p1) { return call_method<"setFocusLostBehavior", void>(p1); }
	jint getFocusLostBehavior() { return call_method<"getFocusLostBehavior", jint>(); }
	void setFormatterFactory(jni::ref<javax::swing::JFormattedTextField_AbstractFormatterFactory> p1) { return call_method<"setFormatterFactory", void>(p1); }
	jni::ref<javax::swing::JFormattedTextField_AbstractFormatterFactory> getFormatterFactory() { return call_method<"getFormatterFactory", jni::ref<javax::swing::JFormattedTextField_AbstractFormatterFactory>>(); }
	jni::ref<javax::swing::JFormattedTextField_AbstractFormatter> getFormatter() { return call_method<"getFormatter", jni::ref<javax::swing::JFormattedTextField_AbstractFormatter>>(); }
	void setValue(jni::ref<java::lang::Object> p1) { return call_method<"setValue", void>(p1); }
	jni::ref<java::lang::Object> getValue() { return call_method<"getValue", jni::ref<java::lang::Object>>(); }
	void commitEdit() { return call_method<"commitEdit", void>(); }
	jboolean isEditValid() { return call_method<"isEditValid", jboolean>(); }
	jni::ref<jni::array<javax::swing::Action>> getActions() { return call_method<"getActions", jni::ref<jni::array<javax::swing::Action>>>(); }
	jni::ref<java::lang::String> getUIClassID() { return call_method<"getUIClassID", jni::ref<java::lang::String>>(); }
	void setDocument(jni::ref<javax::swing::text::Document> p1) { return call_method<"setDocument", void>(p1); }

protected:

	JFormattedTextField(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JFORMATTEDTEXTFIELD
