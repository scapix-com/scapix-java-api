// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JAVA_SQL_ROWIDLIFETIME_FWD
#define SCAPIX_JAVA_API_JAVA_SQL_ROWIDLIFETIME_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::sql { class RowIdLifetime; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::sql::RowIdLifetime>
{
	static constexpr fixed_string class_name = "java/sql/RowIdLifetime";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SQL_ROWIDLIFETIME_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SQL_ROWIDLIFETIME)
#define SCAPIX_JAVA_API_JAVA_SQL_ROWIDLIFETIME

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::sql::RowIdLifetime : public jni::object_base<"java/sql/RowIdLifetime",
	java::lang::Enum>
{
public:

	static jni::ref<java::sql::RowIdLifetime> ROWID_UNSUPPORTED() { return get_static_field<"ROWID_UNSUPPORTED", jni::ref<java::sql::RowIdLifetime>>(); }
	static jni::ref<java::sql::RowIdLifetime> ROWID_VALID_OTHER() { return get_static_field<"ROWID_VALID_OTHER", jni::ref<java::sql::RowIdLifetime>>(); }
	static jni::ref<java::sql::RowIdLifetime> ROWID_VALID_SESSION() { return get_static_field<"ROWID_VALID_SESSION", jni::ref<java::sql::RowIdLifetime>>(); }
	static jni::ref<java::sql::RowIdLifetime> ROWID_VALID_TRANSACTION() { return get_static_field<"ROWID_VALID_TRANSACTION", jni::ref<java::sql::RowIdLifetime>>(); }
	static jni::ref<java::sql::RowIdLifetime> ROWID_VALID_FOREVER() { return get_static_field<"ROWID_VALID_FOREVER", jni::ref<java::sql::RowIdLifetime>>(); }

	static jni::ref<jni::array<java::sql::RowIdLifetime>> values() { return call_static_method<"values", jni::ref<jni::array<java::sql::RowIdLifetime>>>(); }
	static jni::ref<java::sql::RowIdLifetime> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<java::sql::RowIdLifetime>>(name); }

protected:

	RowIdLifetime(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SQL_ROWIDLIFETIME
