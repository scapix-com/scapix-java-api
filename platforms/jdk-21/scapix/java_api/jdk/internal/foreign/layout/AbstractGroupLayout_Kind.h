// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_LAYOUT_ABSTRACTGROUPLAYOUT_KIND_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_LAYOUT_ABSTRACTGROUPLAYOUT_KIND_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::foreign::layout { class AbstractGroupLayout_Kind; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::foreign::layout::AbstractGroupLayout_Kind>
{
	static constexpr fixed_string class_name = "jdk/internal/foreign/layout/AbstractGroupLayout$Kind";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_LAYOUT_ABSTRACTGROUPLAYOUT_KIND_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_LAYOUT_ABSTRACTGROUPLAYOUT_KIND)
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_LAYOUT_ABSTRACTGROUPLAYOUT_KIND

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::foreign::layout::AbstractGroupLayout_Kind : public jni::object_base<"jdk/internal/foreign/layout/AbstractGroupLayout$Kind",
	java::lang::Enum>
{
public:

	static jni::ref<jdk::internal::foreign::layout::AbstractGroupLayout_Kind> STRUCT() { return get_static_field<"STRUCT", jni::ref<jdk::internal::foreign::layout::AbstractGroupLayout_Kind>>(); }
	static jni::ref<jdk::internal::foreign::layout::AbstractGroupLayout_Kind> UNION() { return get_static_field<"UNION", jni::ref<jdk::internal::foreign::layout::AbstractGroupLayout_Kind>>(); }

	static jni::ref<jni::array<jdk::internal::foreign::layout::AbstractGroupLayout_Kind>> values() { return call_static_method<"values", jni::ref<jni::array<jdk::internal::foreign::layout::AbstractGroupLayout_Kind>>>(); }
	static jni::ref<jdk::internal::foreign::layout::AbstractGroupLayout_Kind> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<jdk::internal::foreign::layout::AbstractGroupLayout_Kind>>(name); }

protected:

	AbstractGroupLayout_Kind(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_LAYOUT_ABSTRACTGROUPLAYOUT_KIND