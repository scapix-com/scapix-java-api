// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_UNDO_CANNOTREDOEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_UNDO_CANNOTREDOEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::undo { class CannotRedoException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::undo::CannotRedoException>
{
	static constexpr fixed_string class_name = "javax/swing/undo/CannotRedoException";
	using base_classes = std::tuple<scapix::java_api::java::lang::RuntimeException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_UNDO_CANNOTREDOEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_UNDO_CANNOTREDOEXCEPTION)
#define SCAPIX_JAVA_API_JAVAX_SWING_UNDO_CANNOTREDOEXCEPTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::undo::CannotRedoException : public jni::object_base<"javax/swing/undo/CannotRedoException",
	java::lang::RuntimeException>
{
public:

	static jni::ref<javax::swing::undo::CannotRedoException> new_object() { return base_::new_object(); }

protected:

	CannotRedoException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_UNDO_CANNOTREDOEXCEPTION
