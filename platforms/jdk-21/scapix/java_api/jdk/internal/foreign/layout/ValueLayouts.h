// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_LAYOUT_VALUELAYOUTS_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_LAYOUT_VALUELAYOUTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::foreign::layout { class ValueLayouts; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::foreign::layout::ValueLayouts>
{
	static constexpr fixed_string class_name = "jdk/internal/foreign/layout/ValueLayouts";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_LAYOUT_VALUELAYOUTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_LAYOUT_VALUELAYOUTS)
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_LAYOUT_VALUELAYOUTS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/foreign/ValueLayout.h>
#include <scapix/java_api/java/nio/ByteOrder.h>
#include <scapix/java_api/jdk/internal/foreign/layout/ValueLayouts_OfBooleanImpl.h>
#include <scapix/java_api/jdk/internal/foreign/layout/ValueLayouts_OfCharImpl.h>
#include <scapix/java_api/jdk/internal/foreign/layout/ValueLayouts_OfByteImpl.h>
#include <scapix/java_api/jdk/internal/foreign/layout/ValueLayouts_OfShortImpl.h>
#include <scapix/java_api/jdk/internal/foreign/layout/ValueLayouts_OfIntImpl.h>
#include <scapix/java_api/jdk/internal/foreign/layout/ValueLayouts_OfFloatImpl.h>
#include <scapix/java_api/jdk/internal/foreign/layout/ValueLayouts_OfLongImpl.h>
#include <scapix/java_api/jdk/internal/foreign/layout/ValueLayouts_OfDoubleImpl.h>
#include <scapix/java_api/jdk/internal/foreign/layout/ValueLayouts_OfAddressImpl.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::foreign::layout::ValueLayouts : public jni::object_base<"jdk/internal/foreign/layout/ValueLayouts",
	java::lang::Object>
{
public:

	using OfBooleanImpl = ValueLayouts_OfBooleanImpl;
	using OfCharImpl = ValueLayouts_OfCharImpl;
	using OfByteImpl = ValueLayouts_OfByteImpl;
	using OfShortImpl = ValueLayouts_OfShortImpl;
	using OfIntImpl = ValueLayouts_OfIntImpl;
	using OfFloatImpl = ValueLayouts_OfFloatImpl;
	using OfLongImpl = ValueLayouts_OfLongImpl;
	using OfDoubleImpl = ValueLayouts_OfDoubleImpl;
	using OfAddressImpl = ValueLayouts_OfAddressImpl;

	static jni::ref<java::lang::foreign::ValueLayout> valueLayout(jni::ref<java::lang::Class> carrier, jni::ref<java::nio::ByteOrder> order) { return call_static_method<"valueLayout", jni::ref<java::lang::foreign::ValueLayout>>(carrier, order); }

protected:

	ValueLayouts(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_LAYOUT_VALUELAYOUTS
