// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/geom/PathIterator.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_GEOM_ARCITERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_GEOM_ARCITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::geom { class ArcIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::geom::ArcIterator>
{
	static constexpr fixed_string class_name = "java/awt/geom/ArcIterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::geom::PathIterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_GEOM_ARCITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_GEOM_ARCITERATOR)
#define SCAPIX_JAVA_API_JAVA_AWT_GEOM_ARCITERATOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::awt::geom::ArcIterator : public jni::object_base<"java/awt/geom/ArcIterator",
	java::lang::Object,
	java::awt::geom::PathIterator>
{
public:

	jint getWindingRule() { return call_method<"getWindingRule", jint>(); }
	jboolean isDone() { return call_method<"isDone", jboolean>(); }
	void next() { return call_method<"next", void>(); }
	jint currentSegment(jni::ref<jni::array<jfloat>> p1) { return call_method<"currentSegment", jint>(p1); }
	jint currentSegment(jni::ref<jni::array<jdouble>> p1) { return call_method<"currentSegment", jint>(p1); }

protected:

	ArcIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_GEOM_ARCITERATOR
