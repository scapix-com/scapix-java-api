// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TREE_ABSTRACTLAYOUTCACHE_NODEDIMENSIONS_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TREE_ABSTRACTLAYOUTCACHE_NODEDIMENSIONS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::tree { class AbstractLayoutCache_NodeDimensions; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::tree::AbstractLayoutCache_NodeDimensions>
{
	static constexpr fixed_string class_name = "javax/swing/tree/AbstractLayoutCache$NodeDimensions";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TREE_ABSTRACTLAYOUTCACHE_NODEDIMENSIONS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TREE_ABSTRACTLAYOUTCACHE_NODEDIMENSIONS)
#define SCAPIX_JAVA_API_JAVAX_SWING_TREE_ABSTRACTLAYOUTCACHE_NODEDIMENSIONS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Rectangle.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::tree::AbstractLayoutCache_NodeDimensions : public jni::object_base<"javax/swing/tree/AbstractLayoutCache$NodeDimensions",
	java::lang::Object>
{
public:

	static jni::ref<javax::swing::tree::AbstractLayoutCache_NodeDimensions> new_object() { return base_::new_object(); }
	jni::ref<java::awt::Rectangle> getNodeDimensions(jni::ref<java::lang::Object> p1, jint p2, jint p3, jboolean p4, jni::ref<java::awt::Rectangle> p5) { return call_method<"getNodeDimensions", jni::ref<java::awt::Rectangle>>(p1, p2, p3, p4, p5); }

protected:

	AbstractLayoutCache_NodeDimensions(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TREE_ABSTRACTLAYOUTCACHE_NODEDIMENSIONS
