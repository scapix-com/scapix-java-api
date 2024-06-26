// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/sql/Struct.h>
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SERIAL_SERIALSTRUCT_FWD
#define SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SERIAL_SERIALSTRUCT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::sql::rowset::serial { class SerialStruct; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::sql::rowset::serial::SerialStruct>
{
	static constexpr fixed_string class_name = "javax/sql/rowset/serial/SerialStruct";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::sql::Struct, scapix::java_api::java::io::Serializable, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SERIAL_SERIALSTRUCT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SERIAL_SERIALSTRUCT)
#define SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SERIAL_SERIALSTRUCT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/sql/SQLData.h>
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::sql::rowset::serial::SerialStruct : public jni::object_base<"javax/sql/rowset/serial/SerialStruct",
	java::lang::Object,
	java::sql::Struct,
	java::io::Serializable,
	java::lang::Cloneable>
{
public:

	static jni::ref<javax::sql::rowset::serial::SerialStruct> new_object(jni::ref<java::sql::Struct> p1, jni::ref<java::util::Map> p2) { return base_::new_object(p1, p2); }
	static jni::ref<javax::sql::rowset::serial::SerialStruct> new_object(jni::ref<java::sql::SQLData> p1, jni::ref<java::util::Map> p2) { return base_::new_object(p1, p2); }
	jni::ref<java::lang::String> getSQLTypeName() { return call_method<"getSQLTypeName", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<java::lang::Object>> getAttributes() { return call_method<"getAttributes", jni::ref<jni::array<java::lang::Object>>>(); }
	jni::ref<jni::array<java::lang::Object>> getAttributes(jni::ref<java::util::Map> p1) { return call_method<"getAttributes", jni::ref<jni::array<java::lang::Object>>>(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }

protected:

	SerialStruct(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SERIAL_SERIALSTRUCT
