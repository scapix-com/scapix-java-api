// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/ComponentUI.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SPINNERUI_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SPINNERUI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf { class SpinnerUI; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::SpinnerUI>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/SpinnerUI";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::ComponentUI>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SPINNERUI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SPINNERUI)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SPINNERUI

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::SpinnerUI : public jni::object_base<"javax/swing/plaf/SpinnerUI",
	javax::swing::plaf::ComponentUI>
{
public:

	static jni::ref<javax::swing::plaf::SpinnerUI> new_object() { return base_::new_object(); }

protected:

	SpinnerUI(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SPINNERUI
