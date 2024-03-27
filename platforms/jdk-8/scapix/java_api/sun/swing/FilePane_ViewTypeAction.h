// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/AbstractAction.h>

#ifndef SCAPIX_JAVA_API_SUN_SWING_FILEPANE_VIEWTYPEACTION_FWD
#define SCAPIX_JAVA_API_SUN_SWING_FILEPANE_VIEWTYPEACTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::swing { class FilePane_ViewTypeAction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::swing::FilePane_ViewTypeAction>
{
	static constexpr fixed_string class_name = "sun/swing/FilePane$ViewTypeAction";
	using base_classes = std::tuple<scapix::java_api::javax::swing::AbstractAction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SWING_FILEPANE_VIEWTYPEACTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SWING_FILEPANE_VIEWTYPEACTION)
#define SCAPIX_JAVA_API_SUN_SWING_FILEPANE_VIEWTYPEACTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/ActionEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::swing::FilePane_ViewTypeAction : public jni::object_base<"sun/swing/FilePane$ViewTypeAction",
	javax::swing::AbstractAction>
{
public:

	void actionPerformed(jni::ref<java::awt::event::ActionEvent> p1) { return call_method<"actionPerformed", void>(p1); }

protected:

	FilePane_ViewTypeAction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SWING_FILEPANE_VIEWTYPEACTION
