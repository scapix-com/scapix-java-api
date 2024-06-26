// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_OPTIONS_KEY_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_OPTIONS_KEY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class Options_Key; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::Options_Key>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/Options$Key";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_OPTIONS_KEY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_OPTIONS_KEY)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_OPTIONS_KEY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::Options_Key : public jni::object_base<"jdk/internal/classfile/impl/Options$Key",
	java::lang::Enum>
{
public:

	static jni::ref<jdk::internal::classfile::impl::Options_Key> GENERATE_STACK_MAPS() { return get_static_field<"GENERATE_STACK_MAPS", jni::ref<jdk::internal::classfile::impl::Options_Key>>(); }
	static jni::ref<jdk::internal::classfile::impl::Options_Key> PROCESS_DEBUG() { return get_static_field<"PROCESS_DEBUG", jni::ref<jdk::internal::classfile::impl::Options_Key>>(); }
	static jni::ref<jdk::internal::classfile::impl::Options_Key> PROCESS_LINE_NUMBERS() { return get_static_field<"PROCESS_LINE_NUMBERS", jni::ref<jdk::internal::classfile::impl::Options_Key>>(); }
	static jni::ref<jdk::internal::classfile::impl::Options_Key> PROCESS_UNKNOWN_ATTRIBUTES() { return get_static_field<"PROCESS_UNKNOWN_ATTRIBUTES", jni::ref<jdk::internal::classfile::impl::Options_Key>>(); }
	static jni::ref<jdk::internal::classfile::impl::Options_Key> CP_SHARING() { return get_static_field<"CP_SHARING", jni::ref<jdk::internal::classfile::impl::Options_Key>>(); }
	static jni::ref<jdk::internal::classfile::impl::Options_Key> FIX_SHORT_JUMPS() { return get_static_field<"FIX_SHORT_JUMPS", jni::ref<jdk::internal::classfile::impl::Options_Key>>(); }
	static jni::ref<jdk::internal::classfile::impl::Options_Key> PATCH_DEAD_CODE() { return get_static_field<"PATCH_DEAD_CODE", jni::ref<jdk::internal::classfile::impl::Options_Key>>(); }
	static jni::ref<jdk::internal::classfile::impl::Options_Key> HIERARCHY_RESOLVER() { return get_static_field<"HIERARCHY_RESOLVER", jni::ref<jdk::internal::classfile::impl::Options_Key>>(); }
	static jni::ref<jdk::internal::classfile::impl::Options_Key> ATTRIBUTE_MAPPER() { return get_static_field<"ATTRIBUTE_MAPPER", jni::ref<jdk::internal::classfile::impl::Options_Key>>(); }
	static jni::ref<jdk::internal::classfile::impl::Options_Key> FILTER_DEAD_LABELS() { return get_static_field<"FILTER_DEAD_LABELS", jni::ref<jdk::internal::classfile::impl::Options_Key>>(); }

	static jni::ref<jni::array<jdk::internal::classfile::impl::Options_Key>> values() { return call_static_method<"values", jni::ref<jni::array<jdk::internal::classfile::impl::Options_Key>>>(); }
	static jni::ref<jdk::internal::classfile::impl::Options_Key> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<jdk::internal::classfile::impl::Options_Key>>(name); }

protected:

	Options_Key(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_OPTIONS_KEY
