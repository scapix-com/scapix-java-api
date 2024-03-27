// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Set.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_GRAPH_GRAPH_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_GRAPH_GRAPH_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::orbutil::graph { class Graph; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::orbutil::graph::Graph>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/orbutil/graph/Graph";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Set>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_GRAPH_GRAPH_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_GRAPH_GRAPH)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_GRAPH_GRAPH

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/impl/orbutil/graph/Node.h>
#include <scapix/java_api/com/sun/corba/se/impl/orbutil/graph/NodeData.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::orbutil::graph::Graph : public jni::object_base<"com/sun/corba/se/impl/orbutil/graph/Graph",
	java::lang::Object,
	java::util::Set>
{
public:

	jni::ref<com::sun::corba::se::impl::orbutil::graph::NodeData> getNodeData(jni::ref<com::sun::corba::se::impl::orbutil::graph::Node> p1) { return call_method<"getNodeData", jni::ref<com::sun::corba::se::impl::orbutil::graph::NodeData>>(p1); }
	jni::ref<java::util::Set> getRoots() { return call_method<"getRoots", jni::ref<java::util::Set>>(); }

protected:

	Graph(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_GRAPH_GRAPH