// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/ActionPropertyChangeListener.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_JTEXTFIELD_TEXTFIELDACTIONPROPERTYCHANGELISTENER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_JTEXTFIELD_TEXTFIELDACTIONPROPERTYCHANGELISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class JTextField_TextFieldActionPropertyChangeListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::JTextField_TextFieldActionPropertyChangeListener>
{
	static constexpr fixed_string class_name = "javax/swing/JTextField$TextFieldActionPropertyChangeListener";
	using base_classes = std::tuple<scapix::java_api::javax::swing::ActionPropertyChangeListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JTEXTFIELD_TEXTFIELDACTIONPROPERTYCHANGELISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_JTEXTFIELD_TEXTFIELDACTIONPROPERTYCHANGELISTENER)
#define SCAPIX_JAVA_API_JAVAX_SWING_JTEXTFIELD_TEXTFIELDACTIONPROPERTYCHANGELISTENER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::JTextField_TextFieldActionPropertyChangeListener : public jni::object_base<"javax/swing/JTextField$TextFieldActionPropertyChangeListener",
	javax::swing::ActionPropertyChangeListener>
{
public:


protected:

	JTextField_TextFieldActionPropertyChangeListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JTEXTFIELD_TEXTFIELDACTIONPROPERTYCHANGELISTENER
