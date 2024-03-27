// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Runnable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTSTYLEDDOCUMENT_CHANGEUPDATERUNNABLE_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTSTYLEDDOCUMENT_CHANGEUPDATERUNNABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text { class DefaultStyledDocument_ChangeUpdateRunnable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::DefaultStyledDocument_ChangeUpdateRunnable>
{
	static constexpr fixed_string class_name = "javax/swing/text/DefaultStyledDocument$ChangeUpdateRunnable";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Runnable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTSTYLEDDOCUMENT_CHANGEUPDATERUNNABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTSTYLEDDOCUMENT_CHANGEUPDATERUNNABLE)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTSTYLEDDOCUMENT_CHANGEUPDATERUNNABLE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::DefaultStyledDocument_ChangeUpdateRunnable : public jni::object_base<"javax/swing/text/DefaultStyledDocument$ChangeUpdateRunnable",
	java::lang::Object,
	java::lang::Runnable>
{
public:

	void run() { return call_method<"run", void>(); }

protected:

	DefaultStyledDocument_ChangeUpdateRunnable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTSTYLEDDOCUMENT_CHANGEUPDATERUNNABLE
