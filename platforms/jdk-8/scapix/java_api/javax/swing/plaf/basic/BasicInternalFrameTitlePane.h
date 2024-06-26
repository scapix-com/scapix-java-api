// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/JComponent.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICINTERNALFRAMETITLEPANE_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICINTERNALFRAMETITLEPANE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::basic { class BasicInternalFrameTitlePane; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::basic::BasicInternalFrameTitlePane>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/basic/BasicInternalFrameTitlePane";
	using base_classes = std::tuple<scapix::java_api::javax::swing::JComponent>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICINTERNALFRAMETITLEPANE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICINTERNALFRAMETITLEPANE)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICINTERNALFRAMETITLEPANE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/javax/swing/JInternalFrame.h>
#include <scapix/java_api/javax/swing/plaf/basic/BasicInternalFrameTitlePane_PropertyChangeHandler.h>
#include <scapix/java_api/javax/swing/plaf/basic/BasicInternalFrameTitlePane_TitlePaneLayout.h>
#include <scapix/java_api/javax/swing/plaf/basic/BasicInternalFrameTitlePane_CloseAction.h>
#include <scapix/java_api/javax/swing/plaf/basic/BasicInternalFrameTitlePane_MaximizeAction.h>
#include <scapix/java_api/javax/swing/plaf/basic/BasicInternalFrameTitlePane_IconifyAction.h>
#include <scapix/java_api/javax/swing/plaf/basic/BasicInternalFrameTitlePane_RestoreAction.h>
#include <scapix/java_api/javax/swing/plaf/basic/BasicInternalFrameTitlePane_MoveAction.h>
#include <scapix/java_api/javax/swing/plaf/basic/BasicInternalFrameTitlePane_SizeAction.h>
#include <scapix/java_api/javax/swing/plaf/basic/BasicInternalFrameTitlePane_SystemMenuBar.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::basic::BasicInternalFrameTitlePane : public jni::object_base<"javax/swing/plaf/basic/BasicInternalFrameTitlePane",
	javax::swing::JComponent>
{
public:

	using PropertyChangeHandler = BasicInternalFrameTitlePane_PropertyChangeHandler;
	using TitlePaneLayout = BasicInternalFrameTitlePane_TitlePaneLayout;
	using CloseAction = BasicInternalFrameTitlePane_CloseAction;
	using MaximizeAction = BasicInternalFrameTitlePane_MaximizeAction;
	using IconifyAction = BasicInternalFrameTitlePane_IconifyAction;
	using RestoreAction = BasicInternalFrameTitlePane_RestoreAction;
	using MoveAction = BasicInternalFrameTitlePane_MoveAction;
	using SizeAction = BasicInternalFrameTitlePane_SizeAction;
	using SystemMenuBar = BasicInternalFrameTitlePane_SystemMenuBar;

	static jni::ref<javax::swing::plaf::basic::BasicInternalFrameTitlePane> new_object(jni::ref<javax::swing::JInternalFrame> p1) { return base_::new_object(p1); }
	void paintComponent(jni::ref<java::awt::Graphics> p1) { return call_method<"paintComponent", void>(p1); }

protected:

	BasicInternalFrameTitlePane(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICINTERNALFRAMETITLEPANE
