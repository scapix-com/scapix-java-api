// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_JCOMBOBOX_KEYSELECTIONMANAGER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_JCOMBOBOX_KEYSELECTIONMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class JComboBox_KeySelectionManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::JComboBox_KeySelectionManager>
{
	static constexpr fixed_string class_name = "javax/swing/JComboBox$KeySelectionManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JCOMBOBOX_KEYSELECTIONMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_JCOMBOBOX_KEYSELECTIONMANAGER)
#define SCAPIX_JAVA_API_JAVAX_SWING_JCOMBOBOX_KEYSELECTIONMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/ComboBoxModel.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::JComboBox_KeySelectionManager : public jni::object_base<"javax/swing/JComboBox$KeySelectionManager",
	java::lang::Object>
{
public:

	jint selectionForKey(jchar p1, jni::ref<javax::swing::ComboBoxModel> p2) { return call_method<"selectionForKey", jint>(p1, p2); }

protected:

	JComboBox_KeySelectionManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JCOMBOBOX_KEYSELECTIONMANAGER
