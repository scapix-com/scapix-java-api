// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_CONSTRAINABLEGRAPHICS_FWD
#define SCAPIX_JAVA_API_SUN_AWT_CONSTRAINABLEGRAPHICS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt { class ConstrainableGraphics; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::ConstrainableGraphics>
{
	static constexpr fixed_string class_name = "sun/awt/ConstrainableGraphics";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_CONSTRAINABLEGRAPHICS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_CONSTRAINABLEGRAPHICS)
#define SCAPIX_JAVA_API_SUN_AWT_CONSTRAINABLEGRAPHICS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::ConstrainableGraphics : public jni::object_base<"sun/awt/ConstrainableGraphics",
	java::lang::Object>
{
public:

	void constrain(jint p1, jint p2, jint p3, jint p4) { return call_method<"constrain", void>(p1, p2, p3, p4); }

protected:

	ConstrainableGraphics(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_CONSTRAINABLEGRAPHICS
