// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/DefaultComboBoxModel.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_OPTIONCOMBOBOXMODEL_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_OPTIONCOMBOBOXMODEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text::html { class OptionComboBoxModel; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::html::OptionComboBoxModel>
{
	static constexpr fixed_string class_name = "javax/swing/text/html/OptionComboBoxModel";
	using base_classes = std::tuple<scapix::java_api::javax::swing::DefaultComboBoxModel, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_OPTIONCOMBOBOXMODEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_OPTIONCOMBOBOXMODEL)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_OPTIONCOMBOBOXMODEL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/text/html/Option.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::html::OptionComboBoxModel : public jni::object_base<"javax/swing/text/html/OptionComboBoxModel",
	javax::swing::DefaultComboBoxModel,
	java::io::Serializable>
{
public:

	void setInitialSelection(jni::ref<javax::swing::text::html::Option> p1) { return call_method<"setInitialSelection", void>(p1); }
	jni::ref<javax::swing::text::html::Option> getInitialSelection() { return call_method<"getInitialSelection", jni::ref<javax::swing::text::html::Option>>(); }

protected:

	OptionComboBoxModel(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_OPTIONCOMBOBOXMODEL
