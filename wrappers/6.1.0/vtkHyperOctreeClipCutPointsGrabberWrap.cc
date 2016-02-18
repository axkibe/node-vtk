/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkHyperOctreePointsGrabberWrap.h"
#include "vtkHyperOctreeClipCutPointsGrabberWrap.h"
#include "vtkObjectWrap.h"
#include "vtkOrderedTriangulatorWrap.h"
#include "vtkPolygonWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkHyperOctreeClipCutPointsGrabberWrap::ptpl;

VtkHyperOctreeClipCutPointsGrabberWrap::VtkHyperOctreeClipCutPointsGrabberWrap()
{ }

VtkHyperOctreeClipCutPointsGrabberWrap::VtkHyperOctreeClipCutPointsGrabberWrap(vtkSmartPointer<vtkHyperOctreeClipCutPointsGrabber> _native)
{ native = _native; }

VtkHyperOctreeClipCutPointsGrabberWrap::~VtkHyperOctreeClipCutPointsGrabberWrap()
{ }

void VtkHyperOctreeClipCutPointsGrabberWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkHyperOctreeClipCutPointsGrabber").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("HyperOctreeClipCutPointsGrabber").ToLocalChecked(), ConstructorGetter);
}

void VtkHyperOctreeClipCutPointsGrabberWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkHyperOctreeClipCutPointsGrabberWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkHyperOctreePointsGrabberWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkHyperOctreePointsGrabberWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkHyperOctreeClipCutPointsGrabberWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetPolygon", GetPolygon);
	Nan::SetPrototypeMethod(tpl, "getPolygon", GetPolygon);

	Nan::SetPrototypeMethod(tpl, "GetTriangulator", GetTriangulator);
	Nan::SetPrototypeMethod(tpl, "getTriangulator", GetTriangulator);

	Nan::SetPrototypeMethod(tpl, "InitPointInsertion", InitPointInsertion);
	Nan::SetPrototypeMethod(tpl, "initPointInsertion", InitPointInsertion);

	Nan::SetPrototypeMethod(tpl, "InsertPoint2D", InsertPoint2D);
	Nan::SetPrototypeMethod(tpl, "insertPoint2D", InsertPoint2D);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDimension", SetDimension);
	Nan::SetPrototypeMethod(tpl, "setDimension", SetDimension);

#ifdef VTK_NODE_PLUS_VTKHYPEROCTREECLIPCUTPOINTSGRABBERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKHYPEROCTREECLIPCUTPOINTSGRABBERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkHyperOctreeClipCutPointsGrabberWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkHyperOctreeClipCutPointsGrabber> native = vtkSmartPointer<vtkHyperOctreeClipCutPointsGrabber>::New();
		VtkHyperOctreeClipCutPointsGrabberWrap* obj = new VtkHyperOctreeClipCutPointsGrabberWrap(native);
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

void VtkHyperOctreeClipCutPointsGrabberWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeClipCutPointsGrabberWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeClipCutPointsGrabberWrap>(info.Holder());
	vtkHyperOctreeClipCutPointsGrabber *native = (vtkHyperOctreeClipCutPointsGrabber *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkHyperOctreeClipCutPointsGrabberWrap::GetPolygon(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeClipCutPointsGrabberWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeClipCutPointsGrabberWrap>(info.Holder());
	vtkHyperOctreeClipCutPointsGrabber *native = (vtkHyperOctreeClipCutPointsGrabber *)wrapper->native.GetPointer();
	vtkPolygon * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPolygon();
	VtkPolygonWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPolygonWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolygonWrap *w = new VtkPolygonWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperOctreeClipCutPointsGrabberWrap::GetTriangulator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeClipCutPointsGrabberWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeClipCutPointsGrabberWrap>(info.Holder());
	vtkHyperOctreeClipCutPointsGrabber *native = (vtkHyperOctreeClipCutPointsGrabber *)wrapper->native.GetPointer();
	vtkOrderedTriangulator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTriangulator();
	VtkOrderedTriangulatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkOrderedTriangulatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOrderedTriangulatorWrap *w = new VtkOrderedTriangulatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperOctreeClipCutPointsGrabberWrap::InitPointInsertion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeClipCutPointsGrabberWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeClipCutPointsGrabberWrap>(info.Holder());
	vtkHyperOctreeClipCutPointsGrabber *native = (vtkHyperOctreeClipCutPointsGrabber *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InitPointInsertion();
}

void VtkHyperOctreeClipCutPointsGrabberWrap::InsertPoint2D(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeClipCutPointsGrabberWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeClipCutPointsGrabberWrap>(info.Holder());
	vtkHyperOctreeClipCutPointsGrabber *native = (vtkHyperOctreeClipCutPointsGrabber *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() > 1 && info[1]->IsInt32Array())
		{
			v8::Local<v8::Int32Array>a1(v8::Local<v8::Int32Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->InsertPoint2D(
				(double *)(a0->Buffer()->GetContents().Data()),
				(int *)(a1->Buffer()->GetContents().Data())
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			int b1[3];
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 3; i++ )
			{
				if( !a1->Get(i)->IsInt32() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->Int32Value();
			}
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->InsertPoint2D(
				(double *)(a0->Buffer()->GetContents().Data()),
				b1
			);
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
		if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			int b1[3];
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 3; i++ )
			{
				if( !a1->Get(i)->IsInt32() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->Int32Value();
			}
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->InsertPoint2D(
				b0,
				b1
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsInt32Array())
		{
			v8::Local<v8::Int32Array>a1(v8::Local<v8::Int32Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->InsertPoint2D(
				b0,
				(int *)(a1->Buffer()->GetContents().Data())
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeClipCutPointsGrabberWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeClipCutPointsGrabberWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeClipCutPointsGrabberWrap>(info.Holder());
	vtkHyperOctreeClipCutPointsGrabber *native = (vtkHyperOctreeClipCutPointsGrabber *)wrapper->native.GetPointer();
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

void VtkHyperOctreeClipCutPointsGrabberWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeClipCutPointsGrabberWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeClipCutPointsGrabberWrap>(info.Holder());
	vtkHyperOctreeClipCutPointsGrabber *native = (vtkHyperOctreeClipCutPointsGrabber *)wrapper->native.GetPointer();
	vtkHyperOctreeClipCutPointsGrabber * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkHyperOctreeClipCutPointsGrabberWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHyperOctreeClipCutPointsGrabberWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHyperOctreeClipCutPointsGrabberWrap *w = new VtkHyperOctreeClipCutPointsGrabberWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperOctreeClipCutPointsGrabberWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeClipCutPointsGrabberWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeClipCutPointsGrabberWrap>(info.Holder());
	vtkHyperOctreeClipCutPointsGrabber *native = (vtkHyperOctreeClipCutPointsGrabber *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkHyperOctreeClipCutPointsGrabber * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkHyperOctreeClipCutPointsGrabberWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkHyperOctreeClipCutPointsGrabberWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHyperOctreeClipCutPointsGrabberWrap *w = new VtkHyperOctreeClipCutPointsGrabberWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeClipCutPointsGrabberWrap::SetDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeClipCutPointsGrabberWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeClipCutPointsGrabberWrap>(info.Holder());
	vtkHyperOctreeClipCutPointsGrabber *native = (vtkHyperOctreeClipCutPointsGrabber *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDimension(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

