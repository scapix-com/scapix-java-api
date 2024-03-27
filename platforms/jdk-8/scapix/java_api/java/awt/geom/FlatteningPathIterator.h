// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/geom/PathIterator.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_GEOM_FLATTENINGPATHITERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_GEOM_FLATTENINGPATHITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::geom { class FlatteningPathIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::geom::FlatteningPathIterator>
{
	static constexpr fixed_string class_name = "java/awt/geom/FlatteningPathIterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::geom::PathIterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_GEOM_FLATTENINGPATHITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_GEOM_FLATTENINGPATHITERATOR)
#define SCAPIX_JAVA_API_JAVA_AWT_GEOM_FLATTENINGPATHITERATOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::geom::FlatteningPathIterator : public jni::object_base<"java/awt/geom/FlatteningPathIterator",
	java::lang::Object,
	java::awt::geom::PathIterator>
{
public:

	static jni::ref<java::awt::geom::FlatteningPathIterator> new_object(jni::ref<java::awt::geom::PathIterator> p1, jdouble p2) { return base_::new_object(p1, p2); }
	static jni::ref<java::awt::geom::FlatteningPathIterator> new_object(jni::ref<java::awt::geom::PathIterator> p1, jdouble p2, jint p3) { return base_::new_object(p1, p2, p3); }
	jdouble getFlatness() { return call_method<"getFlatness", jdouble>(); }
	jint getRecursionLimit() { return call_method<"getRecursionLimit", jint>(); }
	jint getWindingRule() { return call_method<"getWindingRule", jint>(); }
	jboolean isDone() { return call_method<"isDone", jboolean>(); }
	void next() { return call_method<"next", void>(); }
	jint currentSegment(jni::ref<jni::array<jfloat>> p1) { return call_method<"currentSegment", jint>(p1); }
	jint currentSegment(jni::ref<jni::array<jdouble>> p1) { return call_method<"currentSegment", jint>(p1); }

protected:

	FlatteningPathIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_GEOM_FLATTENINGPATHITERATOR