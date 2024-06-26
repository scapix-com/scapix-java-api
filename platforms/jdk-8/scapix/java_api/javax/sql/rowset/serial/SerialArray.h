// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/sql/Array.h>
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SERIAL_SERIALARRAY_FWD
#define SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SERIAL_SERIALARRAY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::sql::rowset::serial { class SerialArray; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::sql::rowset::serial::SerialArray>
{
	static constexpr fixed_string class_name = "javax/sql/rowset/serial/SerialArray";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::sql::Array, scapix::java_api::java::io::Serializable, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SERIAL_SERIALARRAY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SERIAL_SERIALARRAY)
#define SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SERIAL_SERIALARRAY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/sql/ResultSet.h>
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::sql::rowset::serial::SerialArray : public jni::object_base<"javax/sql/rowset/serial/SerialArray",
	java::lang::Object,
	java::sql::Array,
	java::io::Serializable,
	java::lang::Cloneable>
{
public:

	static jni::ref<javax::sql::rowset::serial::SerialArray> new_object(jni::ref<java::sql::Array> p1, jni::ref<java::util::Map> p2) { return base_::new_object(p1, p2); }
	void free() { return call_method<"free", void>(); }
	static jni::ref<javax::sql::rowset::serial::SerialArray> new_object(jni::ref<java::sql::Array> p1) { return base_::new_object(p1); }
	jni::ref<java::lang::Object> getArray() { return call_method<"getArray", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> getArray(jni::ref<java::util::Map> p1) { return call_method<"getArray", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> getArray(jlong p1, jint p2) { return call_method<"getArray", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> getArray(jlong p1, jint p2, jni::ref<java::util::Map> p3) { return call_method<"getArray", jni::ref<java::lang::Object>>(p1, p2, p3); }
	jint getBaseType() { return call_method<"getBaseType", jint>(); }
	jni::ref<java::lang::String> getBaseTypeName() { return call_method<"getBaseTypeName", jni::ref<java::lang::String>>(); }
	jni::ref<java::sql::ResultSet> getResultSet(jlong p1, jint p2) { return call_method<"getResultSet", jni::ref<java::sql::ResultSet>>(p1, p2); }
	jni::ref<java::sql::ResultSet> getResultSet(jni::ref<java::util::Map> p1) { return call_method<"getResultSet", jni::ref<java::sql::ResultSet>>(p1); }
	jni::ref<java::sql::ResultSet> getResultSet() { return call_method<"getResultSet", jni::ref<java::sql::ResultSet>>(); }
	jni::ref<java::sql::ResultSet> getResultSet(jlong p1, jint p2, jni::ref<java::util::Map> p3) { return call_method<"getResultSet", jni::ref<java::sql::ResultSet>>(p1, p2, p3); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }

protected:

	SerialArray(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_SERIAL_SERIALARRAY
