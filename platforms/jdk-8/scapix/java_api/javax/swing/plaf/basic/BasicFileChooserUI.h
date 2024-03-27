// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/FileChooserUI.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICFILECHOOSERUI_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICFILECHOOSERUI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::basic { class BasicFileChooserUI; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::basic::BasicFileChooserUI>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/basic/BasicFileChooserUI";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::FileChooserUI>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICFILECHOOSERUI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICFILECHOOSERUI)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICFILECHOOSERUI

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/beans/PropertyChangeListener.h>
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/swing/Action.h>
#include <scapix/java_api/javax/swing/JButton.h>
#include <scapix/java_api/javax/swing/JComponent.h>
#include <scapix/java_api/javax/swing/JFileChooser.h>
#include <scapix/java_api/javax/swing/JPanel.h>
#include <scapix/java_api/javax/swing/event/ListSelectionListener.h>
#include <scapix/java_api/javax/swing/filechooser/FileFilter.h>
#include <scapix/java_api/javax/swing/filechooser/FileView.h>
#include <scapix/java_api/javax/swing/plaf/ComponentUI.h>
#include <scapix/java_api/javax/swing/plaf/basic/BasicDirectoryModel.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::basic::BasicFileChooserUI : public jni::object_base<"javax/swing/plaf/basic/BasicFileChooserUI",
	javax::swing::plaf::FileChooserUI>
{
public:

	static jni::ref<javax::swing::plaf::ComponentUI> createUI(jni::ref<javax::swing::JComponent> p1) { return call_static_method<"createUI", jni::ref<javax::swing::plaf::ComponentUI>>(p1); }
	static jni::ref<javax::swing::plaf::basic::BasicFileChooserUI> new_object(jni::ref<javax::swing::JFileChooser> p1) { return base_::new_object(p1); }
	void installUI(jni::ref<javax::swing::JComponent> p1) { return call_method<"installUI", void>(p1); }
	void uninstallUI(jni::ref<javax::swing::JComponent> p1) { return call_method<"uninstallUI", void>(p1); }
	void installComponents(jni::ref<javax::swing::JFileChooser> p1) { return call_method<"installComponents", void>(p1); }
	void uninstallComponents(jni::ref<javax::swing::JFileChooser> p1) { return call_method<"uninstallComponents", void>(p1); }
	jni::ref<javax::swing::plaf::basic::BasicDirectoryModel> getModel() { return call_method<"getModel", jni::ref<javax::swing::plaf::basic::BasicDirectoryModel>>(); }
	jni::ref<java::beans::PropertyChangeListener> createPropertyChangeListener(jni::ref<javax::swing::JFileChooser> p1) { return call_method<"createPropertyChangeListener", jni::ref<java::beans::PropertyChangeListener>>(p1); }
	jni::ref<java::lang::String> getFileName() { return call_method<"getFileName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getDirectoryName() { return call_method<"getDirectoryName", jni::ref<java::lang::String>>(); }
	void setFileName(jni::ref<java::lang::String> p1) { return call_method<"setFileName", void>(p1); }
	void setDirectoryName(jni::ref<java::lang::String> p1) { return call_method<"setDirectoryName", void>(p1); }
	void rescanCurrentDirectory(jni::ref<javax::swing::JFileChooser> p1) { return call_method<"rescanCurrentDirectory", void>(p1); }
	void ensureFileIsVisible(jni::ref<javax::swing::JFileChooser> p1, jni::ref<java::io::File> p2) { return call_method<"ensureFileIsVisible", void>(p1, p2); }
	jni::ref<javax::swing::JFileChooser> getFileChooser() { return call_method<"getFileChooser", jni::ref<javax::swing::JFileChooser>>(); }
	jni::ref<javax::swing::JPanel> getAccessoryPanel() { return call_method<"getAccessoryPanel", jni::ref<javax::swing::JPanel>>(); }
	jni::ref<javax::swing::JButton> getDefaultButton(jni::ref<javax::swing::JFileChooser> p1) { return call_method<"getDefaultButton", jni::ref<javax::swing::JButton>>(p1); }
	jni::ref<java::lang::String> getApproveButtonToolTipText(jni::ref<javax::swing::JFileChooser> p1) { return call_method<"getApproveButtonToolTipText", jni::ref<java::lang::String>>(p1); }
	void clearIconCache() { return call_method<"clearIconCache", void>(); }
	jni::ref<javax::swing::event::ListSelectionListener> createListSelectionListener(jni::ref<javax::swing::JFileChooser> p1) { return call_method<"createListSelectionListener", jni::ref<javax::swing::event::ListSelectionListener>>(p1); }
	jni::ref<javax::swing::filechooser::FileFilter> getAcceptAllFileFilter(jni::ref<javax::swing::JFileChooser> p1) { return call_method<"getAcceptAllFileFilter", jni::ref<javax::swing::filechooser::FileFilter>>(p1); }
	jni::ref<javax::swing::filechooser::FileView> getFileView(jni::ref<javax::swing::JFileChooser> p1) { return call_method<"getFileView", jni::ref<javax::swing::filechooser::FileView>>(p1); }
	jni::ref<java::lang::String> getDialogTitle(jni::ref<javax::swing::JFileChooser> p1) { return call_method<"getDialogTitle", jni::ref<java::lang::String>>(p1); }
	jint getApproveButtonMnemonic(jni::ref<javax::swing::JFileChooser> p1) { return call_method<"getApproveButtonMnemonic", jint>(p1); }
	jni::ref<java::lang::String> getApproveButtonText(jni::ref<javax::swing::JFileChooser> p1) { return call_method<"getApproveButtonText", jni::ref<java::lang::String>>(p1); }
	jni::ref<javax::swing::Action> getNewFolderAction() { return call_method<"getNewFolderAction", jni::ref<javax::swing::Action>>(); }
	jni::ref<javax::swing::Action> getGoHomeAction() { return call_method<"getGoHomeAction", jni::ref<javax::swing::Action>>(); }
	jni::ref<javax::swing::Action> getChangeToParentDirectoryAction() { return call_method<"getChangeToParentDirectoryAction", jni::ref<javax::swing::Action>>(); }
	jni::ref<javax::swing::Action> getApproveSelectionAction() { return call_method<"getApproveSelectionAction", jni::ref<javax::swing::Action>>(); }
	jni::ref<javax::swing::Action> getCancelSelectionAction() { return call_method<"getCancelSelectionAction", jni::ref<javax::swing::Action>>(); }
	jni::ref<javax::swing::Action> getUpdateAction() { return call_method<"getUpdateAction", jni::ref<javax::swing::Action>>(); }

protected:

	BasicFileChooserUI(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICFILECHOOSERUI