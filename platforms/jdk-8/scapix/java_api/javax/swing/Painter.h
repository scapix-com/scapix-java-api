// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PAINTER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PAINTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class Painter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::Painter>
{
	static constexpr fixed_string class_name = "javax/swing/Painter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PAINTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PAINTER)
#define SCAPIX_JAVA_API_JAVAX_SWING_PAINTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Graphics2D.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::Painter : public jni::object_base<"javax/swing/Painter",
	java::lang::Object>
{
public:

	void paint(jni::ref<java::awt::Graphics2D> p1, jni::ref<java::lang::Object> p2, jint p3, jint p4) { return call_method<"paint", void>(p1, p2, p3, p4); }

protected:

	Painter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PAINTER