// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TREE_TREEPATH_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TREE_TREEPATH_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::tree { class TreePath; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::tree::TreePath>
{
	static constexpr fixed_string class_name = "javax/swing/tree/TreePath";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TREE_TREEPATH_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TREE_TREEPATH)
#define SCAPIX_JAVA_API_JAVAX_SWING_TREE_TREEPATH

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::tree::TreePath : public jni::object_base<"javax/swing/tree/TreePath",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<javax::swing::tree::TreePath> new_object(jni::ref<jni::array<java::lang::Object>> p1) { return base_::new_object(p1); }
	static jni::ref<javax::swing::tree::TreePath> new_object(jni::ref<java::lang::Object> p1) { return base_::new_object(p1); }
	jni::ref<jni::array<java::lang::Object>> getPath() { return call_method<"getPath", jni::ref<jni::array<java::lang::Object>>>(); }
	jni::ref<java::lang::Object> getLastPathComponent() { return call_method<"getLastPathComponent", jni::ref<java::lang::Object>>(); }
	jint getPathCount() { return call_method<"getPathCount", jint>(); }
	jni::ref<java::lang::Object> getPathComponent(jint p1) { return call_method<"getPathComponent", jni::ref<java::lang::Object>>(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean isDescendant(jni::ref<javax::swing::tree::TreePath> p1) { return call_method<"isDescendant", jboolean>(p1); }
	jni::ref<javax::swing::tree::TreePath> pathByAddingChild(jni::ref<java::lang::Object> p1) { return call_method<"pathByAddingChild", jni::ref<javax::swing::tree::TreePath>>(p1); }
	jni::ref<javax::swing::tree::TreePath> getParentPath() { return call_method<"getParentPath", jni::ref<javax::swing::tree::TreePath>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	TreePath(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TREE_TREEPATH