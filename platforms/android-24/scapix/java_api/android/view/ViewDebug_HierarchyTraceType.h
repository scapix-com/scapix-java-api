// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_VIEWDEBUG_HIERARCHYTRACETYPE_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_VIEWDEBUG_HIERARCHYTRACETYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class ViewDebug_HierarchyTraceType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::ViewDebug_HierarchyTraceType>
{
	static constexpr fixed_string class_name = "android/view/ViewDebug$HierarchyTraceType";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_VIEWDEBUG_HIERARCHYTRACETYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_VIEWDEBUG_HIERARCHYTRACETYPE)
#define SCAPIX_JAVA_API_ANDROID_VIEW_VIEWDEBUG_HIERARCHYTRACETYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::ViewDebug_HierarchyTraceType : public jni::object_base<"android/view/ViewDebug$HierarchyTraceType",
	java::lang::Enum>
{
public:

	static jni::ref<android::view::ViewDebug_HierarchyTraceType> BUILD_CACHE() { return get_static_field<"BUILD_CACHE", jni::ref<android::view::ViewDebug_HierarchyTraceType>>(); }
	static jni::ref<android::view::ViewDebug_HierarchyTraceType> DRAW() { return get_static_field<"DRAW", jni::ref<android::view::ViewDebug_HierarchyTraceType>>(); }
	static jni::ref<android::view::ViewDebug_HierarchyTraceType> INVALIDATE() { return get_static_field<"INVALIDATE", jni::ref<android::view::ViewDebug_HierarchyTraceType>>(); }
	static jni::ref<android::view::ViewDebug_HierarchyTraceType> INVALIDATE_CHILD() { return get_static_field<"INVALIDATE_CHILD", jni::ref<android::view::ViewDebug_HierarchyTraceType>>(); }
	static jni::ref<android::view::ViewDebug_HierarchyTraceType> INVALIDATE_CHILD_IN_PARENT() { return get_static_field<"INVALIDATE_CHILD_IN_PARENT", jni::ref<android::view::ViewDebug_HierarchyTraceType>>(); }
	static jni::ref<android::view::ViewDebug_HierarchyTraceType> ON_LAYOUT() { return get_static_field<"ON_LAYOUT", jni::ref<android::view::ViewDebug_HierarchyTraceType>>(); }
	static jni::ref<android::view::ViewDebug_HierarchyTraceType> ON_MEASURE() { return get_static_field<"ON_MEASURE", jni::ref<android::view::ViewDebug_HierarchyTraceType>>(); }
	static jni::ref<android::view::ViewDebug_HierarchyTraceType> REQUEST_LAYOUT() { return get_static_field<"REQUEST_LAYOUT", jni::ref<android::view::ViewDebug_HierarchyTraceType>>(); }

	static jni::ref<jni::array<android::view::ViewDebug_HierarchyTraceType>> values() { return call_static_method<"values", jni::ref<jni::array<android::view::ViewDebug_HierarchyTraceType>>>(); }
	static jni::ref<android::view::ViewDebug_HierarchyTraceType> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<android::view::ViewDebug_HierarchyTraceType>>(name); }

protected:

	ViewDebug_HierarchyTraceType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_VIEWDEBUG_HIERARCHYTRACETYPE
