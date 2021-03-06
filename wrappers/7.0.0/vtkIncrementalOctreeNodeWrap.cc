/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkIncrementalOctreeNodeWrap.h"
#include "vtkIdListWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkIncrementalOctreeNodeWrap::ptpl;

VtkIncrementalOctreeNodeWrap::VtkIncrementalOctreeNodeWrap()
{ }

VtkIncrementalOctreeNodeWrap::VtkIncrementalOctreeNodeWrap(vtkSmartPointer<vtkIncrementalOctreeNode> _native)
{ native = _native; }

VtkIncrementalOctreeNodeWrap::~VtkIncrementalOctreeNodeWrap()
{ }

void VtkIncrementalOctreeNodeWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkIncrementalOctreeNode").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("IncrementalOctreeNode").ToLocalChecked(), ConstructorGetter);
}

void VtkIncrementalOctreeNodeWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkIncrementalOctreeNodeWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkIncrementalOctreeNodeWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ContainsPoint", ContainsPoint);
	Nan::SetPrototypeMethod(tpl, "containsPoint", ContainsPoint);

	Nan::SetPrototypeMethod(tpl, "ContainsPointByData", ContainsPointByData);
	Nan::SetPrototypeMethod(tpl, "containsPointByData", ContainsPointByData);

	Nan::SetPrototypeMethod(tpl, "DeleteChildNodes", DeleteChildNodes);
	Nan::SetPrototypeMethod(tpl, "deleteChildNodes", DeleteChildNodes);

	Nan::SetPrototypeMethod(tpl, "ExportAllPointIdsByInsertion", ExportAllPointIdsByInsertion);
	Nan::SetPrototypeMethod(tpl, "exportAllPointIdsByInsertion", ExportAllPointIdsByInsertion);

	Nan::SetPrototypeMethod(tpl, "GetBounds", GetBounds);
	Nan::SetPrototypeMethod(tpl, "getBounds", GetBounds);

	Nan::SetPrototypeMethod(tpl, "GetChild", GetChild);
	Nan::SetPrototypeMethod(tpl, "getChild", GetChild);

	Nan::SetPrototypeMethod(tpl, "GetChildIndex", GetChildIndex);
	Nan::SetPrototypeMethod(tpl, "getChildIndex", GetChildIndex);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDistance2ToBoundary", GetDistance2ToBoundary);
	Nan::SetPrototypeMethod(tpl, "getDistance2ToBoundary", GetDistance2ToBoundary);

	Nan::SetPrototypeMethod(tpl, "GetDistance2ToInnerBoundary", GetDistance2ToInnerBoundary);
	Nan::SetPrototypeMethod(tpl, "getDistance2ToInnerBoundary", GetDistance2ToInnerBoundary);

	Nan::SetPrototypeMethod(tpl, "GetMaxBounds", GetMaxBounds);
	Nan::SetPrototypeMethod(tpl, "getMaxBounds", GetMaxBounds);

	Nan::SetPrototypeMethod(tpl, "GetMinBounds", GetMinBounds);
	Nan::SetPrototypeMethod(tpl, "getMinBounds", GetMinBounds);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfPoints", GetNumberOfPoints);
	Nan::SetPrototypeMethod(tpl, "getNumberOfPoints", GetNumberOfPoints);

	Nan::SetPrototypeMethod(tpl, "GetPointIdSet", GetPointIdSet);
	Nan::SetPrototypeMethod(tpl, "getPointIdSet", GetPointIdSet);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsLeaf", IsLeaf);
	Nan::SetPrototypeMethod(tpl, "isLeaf", IsLeaf);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBounds", SetBounds);
	Nan::SetPrototypeMethod(tpl, "setBounds", SetBounds);

#ifdef VTK_NODE_PLUS_VTKINCREMENTALOCTREENODEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKINCREMENTALOCTREENODEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkIncrementalOctreeNodeWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkIncrementalOctreeNode> native = vtkSmartPointer<vtkIncrementalOctreeNode>::New();
		VtkIncrementalOctreeNodeWrap* obj = new VtkIncrementalOctreeNodeWrap(native);
		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkIncrementalOctreeNodeWrap::ContainsPoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreeNodeWrap>(info.Holder());
	vtkIncrementalOctreeNode *native = (vtkIncrementalOctreeNode *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->ContainsPoint(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->ContainsPoint(
			b0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkIncrementalOctreeNodeWrap::ContainsPointByData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreeNodeWrap>(info.Holder());
	vtkIncrementalOctreeNode *native = (vtkIncrementalOctreeNode *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->ContainsPointByData(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->ContainsPointByData(
			b0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkIncrementalOctreeNodeWrap::DeleteChildNodes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreeNodeWrap>(info.Holder());
	vtkIncrementalOctreeNode *native = (vtkIncrementalOctreeNode *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DeleteChildNodes();
}

void VtkIncrementalOctreeNodeWrap::ExportAllPointIdsByInsertion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreeNodeWrap>(info.Holder());
	vtkIncrementalOctreeNode *native = (vtkIncrementalOctreeNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkIdListWrap::ptpl))->HasInstance(info[0]))
	{
		VtkIdListWrap *a0 = ObjectWrap::Unwrap<VtkIdListWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ExportAllPointIdsByInsertion(
			(vtkIdList *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkIncrementalOctreeNodeWrap::GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreeNodeWrap>(info.Holder());
	vtkIncrementalOctreeNode *native = (vtkIncrementalOctreeNode *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetBounds(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[6];
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 6; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetBounds(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkIncrementalOctreeNodeWrap::GetChild(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreeNodeWrap>(info.Holder());
	vtkIncrementalOctreeNode *native = (vtkIncrementalOctreeNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkIncrementalOctreeNode * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetChild(
			info[0]->Int32Value()
		);
		VtkIncrementalOctreeNodeWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkIncrementalOctreeNodeWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkIncrementalOctreeNodeWrap *w = new VtkIncrementalOctreeNodeWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkIncrementalOctreeNodeWrap::GetChildIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreeNodeWrap>(info.Holder());
	vtkIncrementalOctreeNode *native = (vtkIncrementalOctreeNode *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetChildIndex(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetChildIndex(
			b0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkIncrementalOctreeNodeWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreeNodeWrap>(info.Holder());
	vtkIncrementalOctreeNode *native = (vtkIncrementalOctreeNode *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkIncrementalOctreeNodeWrap::GetDistance2ToBoundary(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreeNodeWrap>(info.Holder());
	vtkIncrementalOctreeNode *native = (vtkIncrementalOctreeNode *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkIncrementalOctreeNodeWrap::ptpl))->HasInstance(info[1]))
		{
			VtkIncrementalOctreeNodeWrap *a1 = ObjectWrap::Unwrap<VtkIncrementalOctreeNodeWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				double r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->GetDistance2ToBoundary(
					(double *)(a0->Buffer()->GetContents().Data()),
					(vtkIncrementalOctreeNode *) a1->native.GetPointer(),
					info[2]->Int32Value()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkIncrementalOctreeNodeWrap::ptpl))->HasInstance(info[1]))
		{
			VtkIncrementalOctreeNodeWrap *a1 = ObjectWrap::Unwrap<VtkIncrementalOctreeNodeWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				double r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->GetDistance2ToBoundary(
					b0,
					(vtkIncrementalOctreeNode *) a1->native.GetPointer(),
					info[2]->Int32Value()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	else if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkIncrementalOctreeNodeWrap::ptpl))->HasInstance(info[2]))
			{
				VtkIncrementalOctreeNodeWrap *a2 = ObjectWrap::Unwrap<VtkIncrementalOctreeNodeWrap>(info[2]->ToObject());
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					double r;
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					r = native->GetDistance2ToBoundary(
						(double *)(a0->Buffer()->GetContents().Data()),
						(double *)(a1->Buffer()->GetContents().Data()),
						(vtkIncrementalOctreeNode *) a2->native.GetPointer(),
						info[3]->Int32Value()
					);
					info.GetReturnValue().Set(Nan::New(r));
					return;
				}
			}
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[3];
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 3; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkIncrementalOctreeNodeWrap::ptpl))->HasInstance(info[2]))
			{
				VtkIncrementalOctreeNodeWrap *a2 = ObjectWrap::Unwrap<VtkIncrementalOctreeNodeWrap>(info[2]->ToObject());
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					double r;
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					r = native->GetDistance2ToBoundary(
						(double *)(a0->Buffer()->GetContents().Data()),
						b1,
						(vtkIncrementalOctreeNode *) a2->native.GetPointer(),
						info[3]->Int32Value()
					);
					info.GetReturnValue().Set(Nan::New(r));
					return;
				}
			}
		}
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
		if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[3];
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 3; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkIncrementalOctreeNodeWrap::ptpl))->HasInstance(info[2]))
			{
				VtkIncrementalOctreeNodeWrap *a2 = ObjectWrap::Unwrap<VtkIncrementalOctreeNodeWrap>(info[2]->ToObject());
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					double r;
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					r = native->GetDistance2ToBoundary(
						b0,
						b1,
						(vtkIncrementalOctreeNode *) a2->native.GetPointer(),
						info[3]->Int32Value()
					);
					info.GetReturnValue().Set(Nan::New(r));
					return;
				}
			}
		}
		else if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkIncrementalOctreeNodeWrap::ptpl))->HasInstance(info[2]))
			{
				VtkIncrementalOctreeNodeWrap *a2 = ObjectWrap::Unwrap<VtkIncrementalOctreeNodeWrap>(info[2]->ToObject());
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					double r;
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					r = native->GetDistance2ToBoundary(
						b0,
						(double *)(a1->Buffer()->GetContents().Data()),
						(vtkIncrementalOctreeNode *) a2->native.GetPointer(),
						info[3]->Int32Value()
					);
					info.GetReturnValue().Set(Nan::New(r));
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkIncrementalOctreeNodeWrap::GetDistance2ToInnerBoundary(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreeNodeWrap>(info.Holder());
	vtkIncrementalOctreeNode *native = (vtkIncrementalOctreeNode *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkIncrementalOctreeNodeWrap::ptpl))->HasInstance(info[1]))
		{
			VtkIncrementalOctreeNodeWrap *a1 = ObjectWrap::Unwrap<VtkIncrementalOctreeNodeWrap>(info[1]->ToObject());
			double r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetDistance2ToInnerBoundary(
				(double *)(a0->Buffer()->GetContents().Data()),
				(vtkIncrementalOctreeNode *) a1->native.GetPointer()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkIncrementalOctreeNodeWrap::ptpl))->HasInstance(info[1]))
		{
			VtkIncrementalOctreeNodeWrap *a1 = ObjectWrap::Unwrap<VtkIncrementalOctreeNodeWrap>(info[1]->ToObject());
			double r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetDistance2ToInnerBoundary(
				b0,
				(vtkIncrementalOctreeNode *) a1->native.GetPointer()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkIncrementalOctreeNodeWrap::GetMaxBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreeNodeWrap>(info.Holder());
	vtkIncrementalOctreeNode *native = (vtkIncrementalOctreeNode *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxBounds();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkIncrementalOctreeNodeWrap::GetMinBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreeNodeWrap>(info.Holder());
	vtkIncrementalOctreeNode *native = (vtkIncrementalOctreeNode *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMinBounds();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkIncrementalOctreeNodeWrap::GetNumberOfPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreeNodeWrap>(info.Holder());
	vtkIncrementalOctreeNode *native = (vtkIncrementalOctreeNode *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfPoints();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkIncrementalOctreeNodeWrap::GetPointIdSet(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreeNodeWrap>(info.Holder());
	vtkIncrementalOctreeNode *native = (vtkIncrementalOctreeNode *)wrapper->native.GetPointer();
	vtkIdList * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPointIdSet();
	VtkIdListWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkIdListWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIdListWrap *w = new VtkIdListWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkIncrementalOctreeNodeWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreeNodeWrap>(info.Holder());
	vtkIncrementalOctreeNode *native = (vtkIncrementalOctreeNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsA(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkIncrementalOctreeNodeWrap::IsLeaf(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreeNodeWrap>(info.Holder());
	vtkIncrementalOctreeNode *native = (vtkIncrementalOctreeNode *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsLeaf();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkIncrementalOctreeNodeWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreeNodeWrap>(info.Holder());
	vtkIncrementalOctreeNode *native = (vtkIncrementalOctreeNode *)wrapper->native.GetPointer();
	vtkIncrementalOctreeNode * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkIncrementalOctreeNodeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkIncrementalOctreeNodeWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIncrementalOctreeNodeWrap *w = new VtkIncrementalOctreeNodeWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkIncrementalOctreeNodeWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreeNodeWrap>(info.Holder());
	vtkIncrementalOctreeNode *native = (vtkIncrementalOctreeNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkIncrementalOctreeNode * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkIncrementalOctreeNodeWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkIncrementalOctreeNodeWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkIncrementalOctreeNodeWrap *w = new VtkIncrementalOctreeNodeWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkIncrementalOctreeNodeWrap::SetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreeNodeWrap>(info.Holder());
	vtkIncrementalOctreeNode *native = (vtkIncrementalOctreeNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() > 4 && info[4]->IsNumber())
					{
						if(info.Length() > 5 && info[5]->IsNumber())
						{
														if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->SetBounds(
								info[0]->NumberValue(),
								info[1]->NumberValue(),
								info[2]->NumberValue(),
								info[3]->NumberValue(),
								info[4]->NumberValue(),
								info[5]->NumberValue()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

