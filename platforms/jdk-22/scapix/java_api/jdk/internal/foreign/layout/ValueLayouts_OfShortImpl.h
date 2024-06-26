// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/foreign/layout/ValueLayouts_AbstractValueLayout.h>
#include <scapix/java_api/java/lang/foreign/ValueLayout_OfShort.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_LAYOUT_VALUELAYOUTS_OFSHORTIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_LAYOUT_VALUELAYOUTS_OFSHORTIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::foreign::layout { class ValueLayouts_OfShortImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::foreign::layout::ValueLayouts_OfShortImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/foreign/layout/ValueLayouts$OfShortImpl";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::foreign::layout::ValueLayouts_AbstractValueLayout, scapix::java_api::java::lang::foreign::ValueLayout_OfShort>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_LAYOUT_VALUELAYOUTS_OFSHORTIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_LAYOUT_VALUELAYOUTS_OFSHORTIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_LAYOUT_VALUELAYOUTS_OFSHORTIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/ByteOrder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::foreign::layout::ValueLayouts_OfShortImpl : public jni::object_base<"jdk/internal/foreign/layout/ValueLayouts$OfShortImpl",
	jdk::internal::foreign::layout::ValueLayouts_AbstractValueLayout,
	java::lang::foreign::ValueLayout_OfShort>
{
public:

	static jni::ref<java::lang::foreign::ValueLayout_OfShort> of(jni::ref<java::nio::ByteOrder> order) { return call_static_method<"of", jni::ref<java::lang::foreign::ValueLayout_OfShort>>(order); }

protected:

	ValueLayouts_OfShortImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_LAYOUT_VALUELAYOUTS_OFSHORTIMPL
