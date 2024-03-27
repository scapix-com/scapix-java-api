// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/JWindow.h>
#include <scapix/java_api/sun/awt/ModalExclude.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_POPUP_HEAVYWEIGHTWINDOW_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_POPUP_HEAVYWEIGHTWINDOW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class Popup_HeavyWeightWindow; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::Popup_HeavyWeightWindow>
{
	static constexpr fixed_string class_name = "javax/swing/Popup$HeavyWeightWindow";
	using base_classes = std::tuple<scapix::java_api::javax::swing::JWindow, scapix::java_api::sun::awt::ModalExclude>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_POPUP_HEAVYWEIGHTWINDOW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_POPUP_HEAVYWEIGHTWINDOW)
#define SCAPIX_JAVA_API_JAVAX_SWING_POPUP_HEAVYWEIGHTWINDOW

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Graphics.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::Popup_HeavyWeightWindow : public jni::object_base<"javax/swing/Popup$HeavyWeightWindow",
	javax::swing::JWindow,
	sun::awt::ModalExclude>
{
public:

	void update(jni::ref<java::awt::Graphics> p1) { return call_method<"update", void>(p1); }
	void show() { return call_method<"show", void>(); }

protected:

	Popup_HeavyWeightWindow(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_POPUP_HEAVYWEIGHTWINDOW
