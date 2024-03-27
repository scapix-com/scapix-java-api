// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/java2d/DisposerRecord.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_CURSOR_CURSORDISPOSER_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_CURSOR_CURSORDISPOSER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class Cursor_CursorDisposer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::Cursor_CursorDisposer>
{
	static constexpr fixed_string class_name = "java/awt/Cursor$CursorDisposer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::java2d::DisposerRecord>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_CURSOR_CURSORDISPOSER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_CURSOR_CURSORDISPOSER)
#define SCAPIX_JAVA_API_JAVA_AWT_CURSOR_CURSORDISPOSER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::awt::Cursor_CursorDisposer : public jni::object_base<"java/awt/Cursor$CursorDisposer",
	java::lang::Object,
	sun::java2d::DisposerRecord>
{
public:

	static jni::ref<java::awt::Cursor_CursorDisposer> new_object(jlong p1) { return base_::new_object(p1); }
	void dispose() { return call_method<"dispose", void>(); }

protected:

	Cursor_CursorDisposer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_CURSOR_CURSORDISPOSER
