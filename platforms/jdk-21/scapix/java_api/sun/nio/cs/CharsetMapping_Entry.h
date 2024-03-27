// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CS_CHARSETMAPPING_ENTRY_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CS_CHARSETMAPPING_ENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::cs { class CharsetMapping_Entry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::cs::CharsetMapping_Entry>
{
	static constexpr fixed_string class_name = "sun/nio/cs/CharsetMapping$Entry";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_CHARSETMAPPING_ENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CS_CHARSETMAPPING_ENTRY)
#define SCAPIX_JAVA_API_SUN_NIO_CS_CHARSETMAPPING_ENTRY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::nio::cs::CharsetMapping_Entry : public jni::object_base<"sun/nio/cs/CharsetMapping$Entry",
	java::lang::Object>
{
public:

	jint bs() { return get_field<"bs", jint>(); }
	void bs(jint v) { set_field<"bs", jint>(v); }
	jint cp() { return get_field<"cp", jint>(); }
	void cp(jint v) { set_field<"cp", jint>(v); }
	jint cp2() { return get_field<"cp2", jint>(); }
	void cp2(jint v) { set_field<"cp2", jint>(v); }

	static jni::ref<sun::nio::cs::CharsetMapping_Entry> new_object() { return base_::new_object(); }

protected:

	CharsetMapping_Entry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_CHARSETMAPPING_ENTRY
