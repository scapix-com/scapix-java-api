// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_FORMATTER_BIGDECIMALLAYOUTFORM_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_FORMATTER_BIGDECIMALLAYOUTFORM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Formatter_BigDecimalLayoutForm; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Formatter_BigDecimalLayoutForm>
{
	static constexpr fixed_string class_name = "java/util/Formatter$BigDecimalLayoutForm";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_FORMATTER_BIGDECIMALLAYOUTFORM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_FORMATTER_BIGDECIMALLAYOUTFORM)
#define SCAPIX_JAVA_API_JAVA_UTIL_FORMATTER_BIGDECIMALLAYOUTFORM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::Formatter_BigDecimalLayoutForm : public jni::object_base<"java/util/Formatter$BigDecimalLayoutForm",
	java::lang::Enum>
{
public:

	static jni::ref<java::util::Formatter_BigDecimalLayoutForm> SCIENTIFIC() { return get_static_field<"SCIENTIFIC", jni::ref<java::util::Formatter_BigDecimalLayoutForm>>(); }
	static jni::ref<java::util::Formatter_BigDecimalLayoutForm> DECIMAL_FLOAT() { return get_static_field<"DECIMAL_FLOAT", jni::ref<java::util::Formatter_BigDecimalLayoutForm>>(); }

	static jni::ref<jni::array<java::util::Formatter_BigDecimalLayoutForm>> values() { return call_static_method<"values", jni::ref<jni::array<java::util::Formatter_BigDecimalLayoutForm>>>(); }
	static jni::ref<java::util::Formatter_BigDecimalLayoutForm> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<java::util::Formatter_BigDecimalLayoutForm>>(name); }

protected:

	Formatter_BigDecimalLayoutForm(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_FORMATTER_BIGDECIMALLAYOUTFORM
