// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/JComponent.h>
#include <scapix/java_api/javax/swing/SwingConstants.h>
#include <scapix/java_api/javax/accessibility/Accessible.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_JPROGRESSBAR_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_JPROGRESSBAR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class JProgressBar; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::JProgressBar>
{
	static constexpr fixed_string class_name = "javax/swing/JProgressBar";
	using base_classes = std::tuple<scapix::java_api::javax::swing::JComponent, scapix::java_api::javax::swing::SwingConstants, scapix::java_api::javax::accessibility::Accessible>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JPROGRESSBAR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_JPROGRESSBAR)
#define SCAPIX_JAVA_API_JAVAX_SWING_JPROGRESSBAR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/accessibility/AccessibleContext.h>
#include <scapix/java_api/javax/swing/BoundedRangeModel.h>
#include <scapix/java_api/javax/swing/event/ChangeListener.h>
#include <scapix/java_api/javax/swing/plaf/ProgressBarUI.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::JProgressBar : public jni::object_base<"javax/swing/JProgressBar",
	javax::swing::JComponent,
	javax::swing::SwingConstants,
	javax::accessibility::Accessible>
{
public:

	static jni::ref<javax::swing::JProgressBar> new_object() { return base_::new_object(); }
	static jni::ref<javax::swing::JProgressBar> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<javax::swing::JProgressBar> new_object(jint p1, jint p2) { return base_::new_object(p1, p2); }
	static jni::ref<javax::swing::JProgressBar> new_object(jint p1, jint p2, jint p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<javax::swing::JProgressBar> new_object(jni::ref<javax::swing::BoundedRangeModel> p1) { return base_::new_object(p1); }
	jint getOrientation() { return call_method<"getOrientation", jint>(); }
	void setOrientation(jint p1) { return call_method<"setOrientation", void>(p1); }
	jboolean isStringPainted() { return call_method<"isStringPainted", jboolean>(); }
	void setStringPainted(jboolean p1) { return call_method<"setStringPainted", void>(p1); }
	jni::ref<java::lang::String> getString() { return call_method<"getString", jni::ref<java::lang::String>>(); }
	void setString(jni::ref<java::lang::String> p1) { return call_method<"setString", void>(p1); }
	jdouble getPercentComplete() { return call_method<"getPercentComplete", jdouble>(); }
	jboolean isBorderPainted() { return call_method<"isBorderPainted", jboolean>(); }
	void setBorderPainted(jboolean p1) { return call_method<"setBorderPainted", void>(p1); }
	jni::ref<javax::swing::plaf::ProgressBarUI> getUI() { return call_method<"getUI", jni::ref<javax::swing::plaf::ProgressBarUI>>(); }
	void setUI(jni::ref<javax::swing::plaf::ProgressBarUI> p1) { return call_method<"setUI", void>(p1); }
	void updateUI() { return call_method<"updateUI", void>(); }
	jni::ref<java::lang::String> getUIClassID() { return call_method<"getUIClassID", jni::ref<java::lang::String>>(); }
	void addChangeListener(jni::ref<javax::swing::event::ChangeListener> p1) { return call_method<"addChangeListener", void>(p1); }
	void removeChangeListener(jni::ref<javax::swing::event::ChangeListener> p1) { return call_method<"removeChangeListener", void>(p1); }
	jni::ref<jni::array<javax::swing::event::ChangeListener>> getChangeListeners() { return call_method<"getChangeListeners", jni::ref<jni::array<javax::swing::event::ChangeListener>>>(); }
	jni::ref<javax::swing::BoundedRangeModel> getModel() { return call_method<"getModel", jni::ref<javax::swing::BoundedRangeModel>>(); }
	void setModel(jni::ref<javax::swing::BoundedRangeModel> p1) { return call_method<"setModel", void>(p1); }
	jint getValue() { return call_method<"getValue", jint>(); }
	jint getMinimum() { return call_method<"getMinimum", jint>(); }
	jint getMaximum() { return call_method<"getMaximum", jint>(); }
	void setValue(jint p1) { return call_method<"setValue", void>(p1); }
	void setMinimum(jint p1) { return call_method<"setMinimum", void>(p1); }
	void setMaximum(jint p1) { return call_method<"setMaximum", void>(p1); }
	void setIndeterminate(jboolean p1) { return call_method<"setIndeterminate", void>(p1); }
	jboolean isIndeterminate() { return call_method<"isIndeterminate", jboolean>(); }
	jni::ref<javax::accessibility::AccessibleContext> getAccessibleContext() { return call_method<"getAccessibleContext", jni::ref<javax::accessibility::AccessibleContext>>(); }

protected:

	JProgressBar(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JPROGRESSBAR
